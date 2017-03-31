#include <iostream>

void printLeaders( int a[], int size )
{
  int end = size - 1;
  int start;
  int leader = a[end] ;
  std::cout << leader << " " ;
  --end ;


  while( end >= 0 )
  {
    if( a[end] > leader )
    {
      leader = a[end] ;
      std::cout << leader << " " ;
    }
    --end ;
  } 
}

int main()
{
  int a[] = { 16, 17, 4, 3, 5,2 } ;

  int size = sizeof( a ) / sizeof( a[0] ) ;

  printLeaders( a, size ) ;
}
