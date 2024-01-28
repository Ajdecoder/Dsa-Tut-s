#include <bits/stdc++.h>
using namespace std;

int main()
{
  
  vector<int> arr = {4, -6, 2, 8};
  int n = arr.size();

  int max_sum = INT_MIN, curr_sum =0;

  for(int i=0; i<n; i++){

   curr_sum += arr[i];

   if(max_sum < curr_sum)
     max_sum = curr_sum;

   if(curr_sum < 0)
     curr_sum = 0;

  }

  cout<<max_sum;

  return 0;
}