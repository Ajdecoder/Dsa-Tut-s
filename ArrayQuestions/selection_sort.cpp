#include <iostream>
#include <vector>
using namespace std;

int selection_sort(vector<int> arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int MinIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[MinIndex] > arr[j])
            {
                MinIndex = j;
            }
        }
        swap(arr[MinIndex], arr[i]);
    }
}

void printArray(vector<int> arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    vector<int> arr = {82, 94, 76, 100, 10, 12, 14, 6};

    int size = arr.size();

    selection_sort(arr, size);
    printArray(arr, size);

    return 0;
}
