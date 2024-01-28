#include <iostream>
using namespace std;
int main()
{
    // Write C++ code he
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        cout << "value of k in i wala loop:- " << k << endl;
        cout << "val of i:- " << i;
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "val of j:- " << j; // when i = 0 : 0,1,2 when i = 1 : 0,1,2 when i = 0 : 0,1,2
            cout << endl;
            cout << "value of k in j wala loop:- " << k++ << endl;
        }
    }

    return 0;
}