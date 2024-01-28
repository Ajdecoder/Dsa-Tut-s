#include<iostream>
using namespace std;

int binsearch(int arr[], int size , int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end - start);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid+1;
        }
        else{
        end = mid - 1;
        }
        mid  = start + (end - start)/2;
    }
    
    return -1;

}

int main(){
    int arr[10];
    int size;
    cout << "Enter the size of array" << endl;
    cin>>size;
    int key;
    cout << "Enter the value of key you want to search for" <<endl;
    cin >> key; 

    cout << "Enter all elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int Find_Index = binsearch(arr,size,key);
    cout <<" The value of " << key << "is at "<< Find_Index << endl;
return 0;
}