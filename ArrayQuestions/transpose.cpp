#include <bits/stdc++.h>
using namespace std;
int main()
{

        vector<vector<int>> matrix = {{1, 2, 3},
                                    {4, 5, 6},
                                    {7, 8, 9}};
    int rows = matrix.size(),col = matrix[0].size();

    vector<vector<int>> arr(col, vector<int>(rows));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout<<arr[i][j] << " ";
        }
        cout<<endl;
    }
    

    return 0;
}