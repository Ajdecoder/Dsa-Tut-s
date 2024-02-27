#include <iostream>
#include<vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};

    int v2 = INT_MIN;
    int ans = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>ans)
        {
            ans = arr[i];
        }
    }

    int Secondlarge = -1;
    
    for(int i = 0; i<arr.size(); i++)
    {
        if(arr[i]!=ans)
        {
            Secondlarge = max(Secondlarge,arr[i]);
        }
    }
 cout<< Secondlarge;

}