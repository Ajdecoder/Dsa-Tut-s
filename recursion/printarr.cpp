#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[], int index)
{

    if (index == -1)
    {
        return;
    }

    printarr(arr, index - 1);
    cout << arr[index] << " ";
}

int sum(int arr[], int)
{
    int total = 0, i = 0;
    total += arr[i + 1];

    return total;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 4, 3, 5}, n = sizeof(arr) / sizeof(arr[1]) - 1;
    // printarr(arr, n);
    for (int i = 0; i < n; i++)
        cout << sum(arr, n);

    return 0;
}