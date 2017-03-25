#include <iostream>

//g++ -o countingOddElements countingOddElements .cpp
//Xor of two same numbers gives zero.
//Here xor will cancel out the effect of same numbers
//and in the end odd one will be left out.
//It only works when there is only one element
//that occures odd times.

int main()
{
  int ar[]= {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
  int n = sizeof(ar)/sizeof(ar[0]);
  int res = 0; 
  for (int i=0; i < n; i++)     
    res = res ^ ar[i];

  std::cout << res << std::endl ;
}
