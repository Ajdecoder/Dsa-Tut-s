#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {9,10,4,76,90,34,8};
    sort(begin(arr),end(arr));
    for (int i : arr)
    {
       cout << i << " ";
    }
    
return 0;
}