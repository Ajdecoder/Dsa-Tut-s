#include <iostream>
using namespace std;

int main()
{
    int n = 3, m = 3;

    // Allocate memory for a 2D array
    int **ptr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        ptr[i] = new int[m];
    }

    // Input values into the 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ptr[i][j];
        }
    }

    // Print the 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    // Deallocate memory for the 2D array
    for (int i = 0; i < n; i++)
    {
        delete[] ptr[i];
    }
    // delete[] ptr;

    // Set the pointer to nullptr to avoid using dangling pointers
    // ptr = nullptr;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
