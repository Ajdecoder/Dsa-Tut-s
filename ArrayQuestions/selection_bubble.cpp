#include <iostream>
using namespace std;

void selsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
               index = j; 
            }
        }
             swap(arr[i], arr[index]);
    }           

} 

void bubblesort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
              for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        
    }
    
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}

int main()
{

    int arr[] = {
        12,
        34,
        5,
        77,
        99,
        45,
        0
    };
    int n = sizeof(arr) / sizeof(arr[0]);
    // selsort(arr, n);
    bubblesort(arr,n);
    printarray(arr, n);
}