#include <bits/stdc++.h>
using namespace std;

// int fact(char str)
// {
//     int n = str - '0';

//     if (n == 1 || n == 0)
//     {
//         return 1;
//     }

//     return n * fact(n - 1);
// }

// void findGCD(vector<int> &nums)
// {
//     int maxi = INT_MIN, mini = INT_MAX;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] > maxi)
//             maxi = max(nums[i], maxi);

//         if (nums[i] < mini)
//             mini = min(mini, nums[i]);
//     }

//     cout << mini << " " << maxi;
// }

int sumSq(int n)
{
    // Your code here

    if (n == 1)
    {
        return 1;
    }

    return n * n + sumSq(n - 1);
}

int main()
{

    // cout << fact('5');

    // int str = '5'-'0';

    // cout<< str;
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    // findGCD(arr);
    cout << sumSq(4);

    return 0;
};