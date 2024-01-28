#include <iostream>
using namespace std;

int s1(int n)
{
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

int mul_tab(int n){
    for (int i = 1; i <= 6; i++)
        cout<<i*n << endl;
}

int s2(int n)
{
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

int main()
{

    int n = 5;
    s1(n);
    s2(n);
    mul_tab(n);

    return 0;
}
