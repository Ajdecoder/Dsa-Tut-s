#include <bits/stdc++.h>
using namespace std;

int maximum(int arr[], int n, int index)
{

    if (index == n - 1)
        return arr[index];

    return max(arr[index], maximum(arr, n, index + 1));
}

bool palin(string s, int start, int end)
{
    if (start > end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return palin(s, start + 1, end - 1);
}

int main()
{

    // int arr[] = {1, 2, 3, 4, 5, 6, 4, 3, 5}, n = sizeof(arr) / sizeof(arr[1]) - 1;
    // int maxi = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     maxi = max(maximum(arr,n,i),maxi);
    // }
    // cout << maximum(arr, n, 0);

    string str = "naman";
    int len = str.length();

    cout << palin(str, 0, len - 1);

    return 0;
}
