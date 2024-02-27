#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = n - i + 1;
        int num = 1;
        while (j > 0)
        {
            cout << num << " ";
            num = num + 1;
            j = j - 1;
        }
        int star = (i - 1) * 2;
        while (star)
        {
            cout << "* ";
            star = star - 1;
        }

        int num_reverse = (n - i + 1);
        while (num_reverse)
        {
            cout << num_reverse << " ";
            num = num - 1;
            num_reverse = num_reverse - 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}