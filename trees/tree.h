#include <vector>

template<typename T>
class Node
{
  public :
    T value ;
    Node<T> *left;
    Node<T> *right;
    Node()
    {
      value = 0 ;
      left = NULL ;
      right = NULL ;
    }

    Node( T data )
    {
      value = data ;
      left = NULL ;
      right = NULL ;
    }
};

template<typename T>
class Tree
{
  public :
    int count ;
    Node<T> *root ;
    virtual void add( T data ) = 0 ;
};
