#include <bits/stdc++.h>
using namespace std;

int matchString(string haystack, string needle, int n, int m)
{
    int first = 0, second = 0;

    for (int i = 0; i <= n - m; i++)
    {
        first = i;
        second = 0;
        while (second < m)
        {
            if (haystack[first] != needle[second])
            break;

            else
            first++, second++;
        }

        if (second == m)
        {
            return first - second;
        }
    }

    return -1;
}

int main()
{

    string haystack = "abaadabcd";
    string needle = "abcd";

    int n = haystack.size(), m = needle.size();

    int result = matchString(haystack, needle, n, m);
    cout << result;

    return 0;
}
