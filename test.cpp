#include <iostream>
using namespace std;

int By_For(int n)
{

    cout << "We are inside By_For formation" << endl;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int By_While(int h)
{

    cout << "We are inside By_While formation" << endl;

    int row1 = 1;
    while (row1 <= h)
    {

        int col1 = 1;
        while (col1 <= row1)
        {
            cout << col1;
            col1 = col1 + 1;
        }
        cout << endl;
        row1 = row1 + 1;
    }
}

int main()
{
    int n, h;

    cout << "provide value of n" << endl;
    cin >> n;

    By_For(n);

    cout << "provide value of h" << endl;
    cin >> h;

    By_While(h);
}
