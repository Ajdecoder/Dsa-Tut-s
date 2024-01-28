#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixsum(vector<int> arr, int n)
{

    vector<int> pre(n);
    pre[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }

    return pre;
}

vector<int> suffixsum(vector<int> arr, int n)
{
    vector<int> suff(n);
    suff[n - 1] = arr[n - 1];

    for (int i = n-2; i >= 0; i--)
    {
        suff[i] = arr[i] + suff[i + 1];
    }
    return suff;
}

int main()
{
    vector<int> arr = {1, 3, 4, 5, 6, 5};
    int n = arr.size();

    vector<int> resultPre = prefixsum(arr, n);

    vector<int> resultSuff = suffixsum(arr, n);

    cout << "printing the Preffix sum ";

    for (int i = 0; i < n; i++)
    {
        cout << resultPre[i] << ' ';
    }

    cout << endl;

    cout << "printing the Suffix sum ";

    for (int i = 0; i < n; i++)
    {
        cout << resultSuff[i] << ' ';
    }
}