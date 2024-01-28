#include <iostream>
using namespace std;
int main()
{
    int cash;
    cin >> cash;

    int n;
    cin>>n;

    switch (cash)
    {
    case 100:
        cout << n / 100;
        break;
    case 50:
        cout << (n % 100) / 50;                                                                                                                                                 
        break;
    case 20:
        cout << (n % 100) / 20;
        break;
    case 1:
        cout << ((n) % (100) % (20));
        break;

    default:
        cout << " you dont have came through any case statement";
        break;
    }
    return 0;
}