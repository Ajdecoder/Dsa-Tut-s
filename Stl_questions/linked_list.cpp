#include <iostream>
#include <array>
using namespace std;
int main()
{

    array<int, 5> arr = {1, 3, 2, 4, 2};

    int n = arr.size();

    arr.fill(arr[3]);
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << arr.empty() << endl;
    cout << arr.at(3) << endl;
    cout << arr.back() << endl;
    cout << arr.front() << endl;

    return 0;
}