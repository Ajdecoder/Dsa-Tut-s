#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 1)
    {
        cout << "Happy Birthday" << endl;
        return;
    }
    cout << n << " days left";
    cout << endl;
    fun(n - 1);
}

void numPrint(int n)
{
    if (n > 0 && n <= 18)
    {
        cout << n << " ";
        numPrint(n + 1);
    }
}

void printEve(int eve)
{
    if (eve % 3 == 0 && eve <= 30 && eve >= 3)
    {
        cout << eve << " ";
        printEve(eve + 3);
    }
}

void printNum(int n, int k)
{
    if (n <= k)
    {
        cout << n << endl;
        printNum(n + 1, k);
    }
}

int main()
{
    int n;
    cin >> n;
    int eve = 3;
    // fun(n);
    // numPrint(n);

    // printEve(eve);

    printNum(1, n);

    return 0;
}
