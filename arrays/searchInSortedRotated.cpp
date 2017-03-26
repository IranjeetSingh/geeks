#include <iostream>

int search( int a[], int size, int key ) 
{

  int low = 0 ;
  int high = size - 1 ;

  int mid = 0 ;

  while ( low < high ) 
  {
    mid = ( low + high ) / 2 ;
    if( key == a[mid] )
    {
      return mid ;
    }

    // first half is sorted 
    if( a[low] <= a[mid] )
    {
      if( key >= a[low] && key <= a[mid] )
      {
        if( key == a[low] )
        {
          return low ;
        }
        else if( key == a[mid] )
        {
          return mid ;
        }
        else
        {
          high = mid - 1 ;
        }
      }
      else
      {
        low = mid + 1 ;
      }
    }
    else if ( a[mid] <= a[high] ) // second half is sorted
    {
      if( key >= a[mid] && key <= a[high] )
      {
        if( key == a[mid] )
        {
          return mid ;
        }
        else if( key == a[high] )
        {
          return high ;
        }
        else
        {
          low = mid + 1 ;
        }
      }
      else
      {
        high = mid - 1 ;
      }
    }
    else
    {
      return -1 ;
    }
  }
  return -1 ;
}

int main()
{

  int a[] = { 50, 10, 20, 30, 40 } ;

  int size = 5 ;

  int key = 20 ;

  std::cout << search(a, size, key) << std::endl ;
}
