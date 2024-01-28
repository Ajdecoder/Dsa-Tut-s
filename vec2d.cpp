#include <iostream>
#include <limits.h>
#include <vector>
#include <array>
using namespace std;

int printRowMax(vector<vector<int>> arr, int row, int col)
{
    int sum = INT_MIN, index = -1;
    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total += arr[i][j];

            if (total > sum)
            {
                sum = total;
                index = i;
            }
        }
    }
    return index;
}

int printSumDig(vector<vector<int>> arr, int row, int col)
{

    int PriSum = 0;
    int PostSum = 0;

    int i = 0;
    while (i < row)
    {
        PriSum += arr[i][i];
        i++;
    }

    int j = 0;     // i = 0;
    i = col - 1;   // j = col-1
    while (j <= i) // (j>=0)
    {
        PostSum += arr[i--][j++]; // j--,i++;
    }

    cout << PriSum << " " << PostSum;
}

int main()
{

    vector<vector<int>> arr = {
        {3, 4, 1},
        {76, 34, 21},
        {1, 4, 9}};

    // int result = printRowMax(arr, 3, 3);
    printSumDig(arr, 3, 3);
    // cout << "The result is " << result;
}