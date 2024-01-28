#include <iostream>
#include <vector>
using namespace std;

bool checkSum(const vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int sum1 = 0, sum2 = 0;

        // Calculate sum of elements on the left side of the array
        for (int j = 0; j <= i; j++)
        {
            sum1 += arr[j];
        }

        // Calculate sum of elements on the right side of the array
        for (int j = i + 1; j < n; j++)
        {
            sum2 += arr[j];
        }

        if (sum1 == sum2)
        {
            return 1;
        }
    }

    return 0;
}

bool OptimizeCheck(const vector<int> &arr, int n)
{

    int TotalSum = 0, prefix = 0;
    for (int i = 0; i < n; i++)
    {
        TotalSum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        int Finalans = TotalSum - prefix;

        if (Finalans == prefix)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    vector<int> arr = {1, 2, 2, 5};
    int n = arr.size();
    // cout << checkSum(arr, n);
    cout << OptimizeCheck(arr, n);
}
