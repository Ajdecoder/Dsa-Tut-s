#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n1, int arr2[], int n2)
{
    int i = n1 - 1;
    int j = n2 - 1;
    int k = n1 + n2 - 1;
    while (j >= 0)
    {
        if (i >= 0 && arr1[i] > arr2[j])
        {
            arr1[k] = arr1[i];
            k--;
            i--;
        }
        else
        {
            arr1[k] = arr2[j];
            k--;
            j--;
        }
    }

    while (i < n1)
    {
        arr1[k] = arr1[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr1[k] = arr2[j];
        k++;
        j++;
    }
}
void print(int arr1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[6] = {1, 2, 3, 0, 0, 0};
    int arr2[3] = {3, 5, 6};

    merge(arr1, 6, arr2, 3);
    print(arr1, 9);

    return 0;
}