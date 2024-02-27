#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        int sumup = n + sum(n - 1);
        
        return sumup;
    }
}

int powOfTwo(int num, int n)
{
    if (n == 1)
    {
        return num;
    }

    return num * powOfTwo(num, n - 1);
}

int main()
{
    // int result = sum(6);
    // cout << "Sum: " << result << endl;

    int pow = powOfTwo(2,5);
    cout << pow;

    return 0;
}
