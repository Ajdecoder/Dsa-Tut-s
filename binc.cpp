#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binSearch(vector<int> arr,int k){
    int s = 0;
    int e = arr.size()-1;

    while(s<=e){
 
        int mid = s+(e-s)/2;
        
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
    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;
    
    cout<<binSearch(arr,k);
    return 0;
}