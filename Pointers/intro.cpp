#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 9};
    int *p = arr;
    // print values
    // cout << p[0] << " " << p[1] << " " << p[2] << " " << p[3] << " " << p[4] << " " << p[5] << " ";
    cout << endl;
    // print address
    cout << &arr[0] << " " << &arr[1] << " " << &arr[2] << " " << &arr[3] << " " << &arr[4] << " " << &arr[5] << " ";

    cout << arr+2;

    return 0;
}