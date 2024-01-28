// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arr = {2, 2, 3, 4};

//     int n = n;
//     vector<int> cnt(n + 1, 0);

//     int repeating = -1;
//     int missing = -1;

//     for (int i = 0; i < n; i++)
//     {
//         cnt[arr[i]]++;

//         if (cnt[arr[i]] > 1)
//         {
//             repeating = arr[i];
//             break;
//         }
//     }

//     for (int i = 1; i < n; i++)
//     {
//         if (cnt[i] == 0)
//         {
//             missing = i;
//             break;
//         }
//     }

//     cout << abs(repeating) << " " << abs(missing);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int count = 0;
    vector<int> arr = {3, 1, 1, 3, 2, 2, 2, 2, 2, 1, 3};
    int candidate;

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            candidate = arr[i];
        }

        else
        {
            if (candidate == arr[i])
                count++;
            else
                count--;
        }
    }
    cout << candidate;
}