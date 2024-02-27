#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int i = 1, n, j, star, num_reverse, num;
    cin >> n;

    while (i <= n)
    {
        j = (n - i + 1);
        while (j > 0)
        {

            cout << j << " ";
            j--;
        }

        star = (i - 1) * 2;
        while (star)
        {
            cout << "* ";
            star--;
        }

        num_reverse = (n - i + 1);
        while (num_reverse)
        {
            cout << num_reverse << " ";
            num_reverse--;
        }

        cout << endl;
        i++;
    }

}