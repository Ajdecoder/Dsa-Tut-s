#include <iostream>
#include <vector>
using namespace std;

void subArray(vector<int> arr, int n)
{
    // Pick starting point
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // Pick ending point
        for (int j = i; j < n; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k = i; k <= j; k++)
                // sum += arr[k];
                cout << arr[k] << " ";
            cout << endl;
        }
    }
    cout << sum;
}

int main()
{

    vector<int> v = {1, 2, 3, 4};

    int n = v.size();
    subArray(v, n);
}