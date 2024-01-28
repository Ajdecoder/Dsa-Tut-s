#include<limits.h>
#include <iostream>
using namespace std;

//to find an element in array

bool find(int arr[][3], int row, int col , int index){

    for (int row = 0; row < 3; row++)
    {   
        for (int col = 0; col < 4; col++)
        {
            if(index ==arr[row][col]){
                return 1;
            }
        }
        
    }
    return 0;

}


int largestRow_Sum(int arr[][3], int row, int col){

    int maxi = INT_MIN;
    int RowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi = sum;
            RowIndex = row;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return RowIndex;

}

// row wise sum
void print_Col_Sum(int arr[][3], int row, int col)
{

    cout << "Printing the Col sum " << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << ' ';
    }
    cout << endl;
}

// col wise sum
void print_row_Sum(int arr[][3], int row, int col)
{

    cout << "Printing the Row sum " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << ' ';
    }
    cout << endl;
}


int main()
{

    int arr[3][3];

    // Input row wise
    cout << "Enter the Elements " << endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    // Input col wise
    // cout << "Enter the Elements " << endl;
    // for (int col = 0; col < 3; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    cout << "Printing the array " << endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    print_row_Sum(arr, 3, 3);
    print_Col_Sum(arr, 3, 3);


    int ans = largestRow_Sum(arr, 3,3);
    cout << "The row is at Index " << ans << endl;


    return 0;
}