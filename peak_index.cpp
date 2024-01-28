#include <vector>
#include <iostream>
using namespace std;

int PeakIndex(vector<int> arr)
{

    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
    // return mid;
}

int main()
{

    vector<int> arr = {3, 5, 10, 8};

    cout << PeakIndex(arr);

    return 0;
}