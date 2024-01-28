#include <iostream>
using namespace std;
int main()
{

    int arr[] = {2, 66, 7767, 76, 12, 15, 67, 25, 88, 30};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool swapped = 1;

    while (swapped)
    {
        swapped = false;

        for (int i = 0; i < size-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                swapped = true; 
            }
        }
    }
    
    for(int i = 0 ; i<size ;i++)
    cout<<arr[i] <<" ";
    
    return 0;
}