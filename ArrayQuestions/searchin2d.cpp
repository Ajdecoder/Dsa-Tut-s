#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>> arr1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int target;
    bool flag = false;
    cin >> target;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            if (arr1[i][j] == target)
            {
                flag = true;
            }
    }

    if (flag)
    {
        cout << "yes";
    }

    else
        cout << "No";
    
}