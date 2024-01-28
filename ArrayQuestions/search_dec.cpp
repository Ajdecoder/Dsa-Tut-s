#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int>> &mat, int n, int m, int t)
{
    int r = 0, c = m - 1;
    while (r < n && c >= 0)
    {
        if (mat[r][c] == t)
        {
            cout << "yes";
            return;
        }

        else if (mat[r][c] < t)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    cout<<"No";
}

int main()
{
    vector<vector<int>> mat = {
        {20, 19, 18, 17},
        {16, 15, 14, 13},
        {12, 11, 10, 9},
        {8, 7, 6, 5}};

    int n = mat.size();
    int m = mat[0].size();

    search(mat, n, m, 18);

    return 0;
}