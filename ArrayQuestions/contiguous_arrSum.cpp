#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {4, -6, 2, 8};
    int maxi = 0; // initializing maximum subarray sum to zero
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int current_sum = 0; // initializing current sum for the subarray
        for (int j = i; j < n; j++)
        {
            current_sum += arr[j];
            maxi = max(maxi, current_sum); // updating maximum subarray sum
        }
    }

    cout << maxi;

    return 0;
}
