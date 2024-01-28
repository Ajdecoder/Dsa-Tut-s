#include <iostream>
#include <limits.h>
using namespace std;

int Max_value(int array[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
             max = array[i];
        }

    }
        return max;
}
int Min_value(int array[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }

    }
        return min;
}

int main()
{
    int n;
    cin >> n;
    int array[100];
    for (int i = 0; i < n; i++)
    {
         cin >> array[i];
    }

    cout << " Maximum value of array is "<< Max_value(array,n);
    cout << " Minimum value of array is "<< Min_value(array,n);
    return 0;
}