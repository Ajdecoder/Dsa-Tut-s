#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int i = 1;
    int j = 1;

    while (i <= n)
    {
        int first_pattern = (n - i + 1);
        int num = 1;
        while (first_pattern > 0)
        {
            cout << num << " ";
            num++;
            first_pattern--;
        }

        int second_pattern = (i - 1) * 2;
        while (second_pattern)
        {
            cout << "* ";
            second_pattern--;
        }

        int numreverse = (n - i + 1);
        while (numreverse)
        {
            cout << numreverse << " ";
            numreverse--;
        }

        cout << endl;
        i++;
    }

    return 0;
}