#include <bits/stdc++.h>
using namespace std;

int KMP(string haystack, string needle)
{
    int n = haystack.size(), m = needle.size();
    vector<int> lps(m, 0);

    int first = 0, second = 0;

    while (first < n && second < m)
    {
        if (haystack[first] == needle[second])
        {
            first++, second++;
        }
        else
        {
            if (second == 0)
                first++;
            else
                second = lps[second - 1];
        }
    }

    if (second == m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    cout << KMP("abcecacdab", "cacd");

    return 0;
}
