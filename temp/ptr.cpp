#include <iostream>
using namespace std;
int main()
{

    int val = 5;
    int *de = &val;
    int **ptr2 = &de;
    int ***ptr3 = &ptr2;

    cout << *de << **ptr2 << ***ptr3;

    return 0;
}