#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int i, int n, int k)
{
    if (i == n)
    {
        return -1; // Element not found
    }

    if (arr[i] == k)
    {
        return i; // Element found at index i
    }

    return linearSearch(arr, i + 1, n, k);
}

int binSearch(int arr[], int s, int e, int k)
{

    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
    {
        return mid;
    }

    else if (arr[mid] > k)
    {
        return binSearch(arr, s, mid - 1, k);
    }

    else
    {
        return binSearch(arr, mid + 1, e, k);
    }
}

string swapStr(string &s, int start, int end)
{

    if (start >= end)
    {
        return s;
    }

    swap(s[start], s[end]);

    return swapStr(s, ++start, --end);
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int key = 12;
    int n = 8;
    int s = 0, e = n - 1;

    // int result = -1;

    // for (int i = 0; i < n; i++)
    // {
    //     result = linearSearch(arr, i, n, key);

    //     if (result != -1)
    //     {
    //         cout << "Element found at index: " << result << endl;
    //         break; // Break the loop if the element is found
    //     }
    // }

    // if (result == -1)j
    // {
    //     cout << "Element not found" << endl;
    // }

    // cout << linearSearch(arr, 0, n, key);

    // int result = binSearch(arr, s, e, key);

    // if (result != -1)
    // {
    //     cout << "Element found at index: " << result << endl;
    // }
    // else
    // {
    //     cout << "Element not found" << endl;
    // }

    string str = "Anuj";
    cout << "String before swaping " << str << endl;

    swapStr(str, 0, 3);
    cout << "String before swaping " << str << endl;

    return 0;
}
