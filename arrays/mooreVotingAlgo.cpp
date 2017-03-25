#include <iostream>
//calculate the maximum occuring element
//in array in O(n) time.
//It only works if the element occurs n/2 times.
//Other wise use hashmap, but it will increase 
//space complexity.

int calculateWinner( int a[], int n )
{
  int count = 1 ;

  int max = 0;

  for ( int i = 1; i < n ; ++i )
  {
    if( a[max] == a[i] )
    {
      ++count ;
    }
    else
    {
      --count ; 
    }

    if( count == 0 )
    {
      max = i ;
      count = 1 ;
    } 
  }
  return a[max] ;
}



int main()
{
  int a[]={1,1,1,3,1,4};
  std::cout << calculateWinner(a,6) << std::endl ;
}
