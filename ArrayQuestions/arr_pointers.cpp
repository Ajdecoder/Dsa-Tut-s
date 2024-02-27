#include <iostream>
using namespace std;
int main()
{
    int arr[3][3][] = {{1, 3, 4},
                       {2, 4, 6},
                       {4, 8, 9}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            for (int k = 0; k < 3; k++)
            {
                cout << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}