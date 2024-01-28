#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    float ans = 0;

    for (int i = 0; n > 0; i++)
    {

        int bits = n & 1;
        ans = (bits * pow(10, i)) + ans;
        n = n >> 1;
    }
    cout << ans;

    return 0;
}