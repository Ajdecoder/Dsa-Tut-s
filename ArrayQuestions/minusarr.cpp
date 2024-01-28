#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>> arr1 = {{21, 22, 32}, {42, 15, 16}, {73, 18, 29}};
    vector<vector<int>> arr2 = {{17, 13, 16}, {23, 10, 12}, {14, 16, 18}};
    vector<vector<int>> ans(3, vector<int>(3));
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

 for (int i = 0; i < ans.size(); i++)  
    { 
        for (int j = 0; j < ans[i].size(); j++) 
        { 
            cout << ans[i][j] << " "; 
        }     
        cout << endl; 
    } 
    
    return 0;
}