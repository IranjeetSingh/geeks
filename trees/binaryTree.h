#include "tree.h"

template<typename T>
class BinarySearchTree : public Tree<T>
{
  public :
    BinarySearchTree();
    void add( T data ) ;
};

template<typename T>
BinarySearchTree<T>::BinarySearchTree()
{
  this->count = 0 ;
  this->root = NULL ;
}

template<typename T>
void BinarySearchTree<T>::add( T data )
{
  if( NULL == this ->root )
  {
    this->root = new Node<T>( data ) ;
  }
  else
  {
    Node<T> *itr = this->root ;
    Node<T> *parent = NULL;
    while( itr != NULL )
    {
      parent = itr ;
      itr = ( data < itr->value ) ? ( itr->left ) : ( itr->right );
    }
    
    if( data < parent->value )
    {
      parent->left = new Node<T>( data ) ;
    }
    else if ( data > parent->value ) 
    {
      parent->right = new Node<T>( data ) ;
    }
    else
    {

    }
  }
  ++( this->count );
}
