#include <bits/stdc++.h>

using namespace std;
int main()
{

    // int arr[] = {1, 2, 3, 4};
    // int *ptr = arr;  

    // int ptr1 = 'a';
    // int *ptr2 = &ptr1;

    // float *ptr3 = new float;
    // *ptr3 = 56;
    // cout<<*ptr3;
    // cout<< (void*)ptr2;
    // cout<< ptr1;
    // cout<< &ptr1;

    for (int i = 0; i < 4; i++)
    {
        // cout << ptr[i] <<" ";
        // cout << *arr + 1 << " ";
    }

    int n = 5;

    int *p = new int[n];

    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    delete[] p;

    cout << endl;

    cout << "trying to print the values after deleting p array" << endl;
    cout<<p[2] <<endl;
    for (int i = 0; i < n; i++)
        cout << p[i] <<" ";

    return 0;
}