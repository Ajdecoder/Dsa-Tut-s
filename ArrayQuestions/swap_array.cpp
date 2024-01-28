#include <iostream>
using namespace std;

void print_array(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap_alternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)  
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{

//     int n;  
//     cin >> n;
//    int arr[100];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
    

    int odd[7] = {3, 5, 7, 9, 11, 13, 15};
    int even[8] = {2, 4, 6, 8, 10, 12, 14, 6};

    swap_alternate(even, 8);
    print_array(even, 8);

    cout << endl;

    swap_alternate(even, 8);
    print_array(odd, 7);

//     // cout << endl;

//     swap_alternate(arr , n);
//     print_array(arr , n);
}