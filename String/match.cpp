#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "cdeabroabcdeabroab";
    string tm = "abcde";
    int n = s.size(), m = tm.size();

    int res = -1; // Initialize result to -1

    for (int i = 0; i <= n - m; i++)
    {
        int p1 = i, p2 = 0;

        while (p2 < m)
        {
            if (s[p1] == tm[p2])
            {
                p1++;
                p2++;
            }
            else
            {
                break;
            }
        }

        if (p2 == m)
        {
            res = i; // Update result if substring is found
            break;
        }
    }

    cout << res << " ";
    string newstr = s.erase(0, res);
    // cout << newstr;
    return 0;
}
