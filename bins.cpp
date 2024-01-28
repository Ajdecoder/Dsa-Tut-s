#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(vector<int> arr,int k){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            s = mid+1;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
    }
    mid = s + (e-s)/2;
    return -1;
}

int main() {
    
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i = 0; i<n; i++)
     cin>>arr[i];

    int k;
    cin>>k;
    
    cout<<binary_search(arr,k);
    
    return 0;
}