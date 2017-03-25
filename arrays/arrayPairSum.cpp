// g++ -o arrayPairSum arrayPairSum.cpp -std=c++11
#include <iostream>

void printPair( int a[], int size, int sum )
{
  bool *isPresent = new bool[50] ;

  int x = 0 ;
  for( int i = 0 ; i < size ; ++i ) 
  {
    x = sum - a[i] ;
    if( (x > 0 ) && (isPresent[(x)]) )
    {
       std::cout << x << " " << a[i] << " " << std::endl ;
    }
    isPresent[a[i]] = true ;
  }
}

int main()
{

  int a[]={1, 4, 45, 6, 10, 8};
  int sum = 16 ;
  int size = sizeof(a)/sizeof(a[0]);
  printPair( a, size, sum ) ;
}
