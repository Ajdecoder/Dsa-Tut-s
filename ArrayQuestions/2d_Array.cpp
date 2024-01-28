#include <iostream>
using namespace std;

void colrep(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)

            cout << arr[i][j];

        cout << endl;
    }
}

void searchin2d(int arr[][3], int row, int col)
{
    int k = 7;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (k == arr[i][j])
            {
                cout << "yes ";
                return;
            }
        }
    }
    cout << "No ";
}

void addArray(int arr1[][3], int arr2[][3], int arr3[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr3[i][j] = (arr1[i][j] + arr1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[3][3] = {1, 2, 3,
                     4, 5, 6,
                     7, 8, 9};

    int arr1[3][3] = {1, 2, 3,
                      4, 5, 6,
                      7, 8, 9};

    int arr2[3][3] = {1, 2, 3,
                      4, 5, 6,
                      7, 8, 9};

    int arr3[3][3];

    /*
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)

                cout << arr[i][j] << " ";
                cout << endl;
        }
    */

    colrep(arr, 3, 3);
    searchin2d(arr, 3, 3);
    cout << endl;
    addArray(arr1, arr2, arr3, 3, 3);
}