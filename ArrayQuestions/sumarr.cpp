#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    vector<int> pre(n);
    pre[0] = arr[0];
    for (int i = 1; i < 6; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }
}