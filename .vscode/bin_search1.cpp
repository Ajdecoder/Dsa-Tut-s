#include <iostream>
using namespace std;

int bin_search(int n, int arr[], int key)
{

    int start = 0;
    int end = n;
    while (start <= end)
    {

        for (int i = 0; i < n; i++)
        {
            int mid = (start + end) / 2;

            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] > key)
            {
                end = mid - 1;
            }
            else

                start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter key" << endl;
    cin >> key;

    cout << bin_search(n, arr, key) << endl;

    return 0;
}
