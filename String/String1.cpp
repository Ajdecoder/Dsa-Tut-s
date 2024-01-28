#include <bits/stdc++.h>
using namespace std;

int func(vector<int> arr)
{

    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[arr[i]] << " ";
    }
}

int main()
{

    // string str = "Anuj \ Anuj";

    // // getline(cin, str);
    // cout << str;

    // str.push_back(str['w']);

    // cout << endl;
    // cout << str.size();

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    func(arr);

    return 0;
}