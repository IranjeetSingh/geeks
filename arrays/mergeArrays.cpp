#include <iostream>
#include <algorithm>
void merge( int A[], int b[], int n, int m ) 
{

  int j = m -1 ;
  for( int i = m - 1 ; i >= 0 ; --i )
  {
    if( b[i] != 0 )
    {
      int temp = b[j] ;
      b[j] = b[i] ;
      b[i] = temp ;
      --j ;
    }
  }
  std::for_each( b, b + ( m ) , ([](int n){ std::cout << n << " "; }) ) ;
  std::cout << std::endl << j << std::endl;


  for ( int a = 0 ; a <= j ; ++a )
  {
    b[a] = A[a] ;
  }
  std::for_each( b, b + ( m ) , ([](int n){ std::cout << n << " "; }) ) ;

}

int main()
{
  int a[]={10,30,50} ;
  int b[]={0,20,0,40,0} ;
  merge( a, b , 3, 5 ) ;
}
