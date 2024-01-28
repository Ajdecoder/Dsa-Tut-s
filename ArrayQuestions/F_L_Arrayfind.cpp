#include<iostream>
#include<vector>
using namespace std;

int first_occurence(vector<int> arr,int size,int key){                                       

    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = (start + end)-start/2;
    while (start<=end)
    {
        
    if (arr[mid] == key)
    {
        ans = mid;
        end = mid - 1;
    }
   else if (arr[mid] < key)
    {
        start = mid + 1;
      
    }
    else if (arr[mid] > key)
    {
        end = mid - 1;
    }
    
    mid = (start + end)-start/2;
}
    return ans;
}

int last_occurence(vector<int> arr, int size , int key){

    int start = 0;
    int end = size - 1;
    int result = -1;
    int mid = (start + end)-start/2;

    while (start<end)
    {
        if (arr[mid] == key)
        {
                result = mid;
                start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
                start = mid + 1;
        }
        
        mid = (start + end) - start/2;
    }
    return result;

}

int main(){
    
    vector<int> arr = {3 , 6 , 9, 12 , 12 , 12 , 12 ,12,12, 15 , 18};
    cout << " The first Occurence is at index "<< first_occurence(arr,11,12);
    cout << endl;
    cout << " The last Occurence is at index " << last_occurence(arr,11,12);
    cout << endl;
    int frequency_occ = last_occurence(arr,9,12) - first_occurence(arr,9,12) + 1;
    cout << " The frequency of occurence is " << frequency_occ << endl;
    

return 0;
}