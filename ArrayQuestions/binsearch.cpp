#include<iostream>
using namespace std;

    int binsearch(int arr[],int size, int key){
        int start = 0;
        int end = size - 1;
        int ans = -1;

        int mid = (start+end)-start/2;

        while (start<=end)
        {
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid]<key)
            {
                start= mid+1;
            }
            else if (arr[mid]>key)
            {
                end= mid-1;
            }

            mid = (start + end)-start/2;

        }
            return ans;
        
    }

int main(){

    int arr[4];
    for (int i = 1; i < 4; i++)
    {
        cin >> arr[i];
    }
    
    int index = binsearch(arr,7,2); 

    cout << "index of key is " << index << endl;

}