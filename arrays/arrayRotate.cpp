#include <algorithm>
#include <iostream>
#include <unistd.h>


void rotate(int a[], int d , int n)
{
  while( n > 0 )
  {
    int first = a[0] ;

    for( int i = 0 ; i < d-1 ; ++i )
    {
      a[i] = a[i+1] ;
    }
    a[d-1] = first ;
    --n ;
  }

  std::for_each( a, a+d, [](int n){ std::cout << n << " " ; }) ;
  std::cout << std::endl ;
}

void reverse( int a[], int start , int end )
{
  while( start < end )
  {
    int temp = a[start] ;
    a[start] = a[end] ;
    a[end] = temp ;
    ++start ;
    --end ;
  }
}


void rotate1( int a[], int d , int n )
{
  reverse( a, 0, n-1 ) ;
  reverse( a, n, d-1 ) ;
  reverse( a, 0, d-1) ;
  std::for_each( a, a+d, [](int n){ std::cout << n << " " ; }) ;
  std::cout << std::endl ;
}

int main()
{
  int a[]={1,2,3,4,5};
  rotate1( a, 5 , 2 ) ;
}
