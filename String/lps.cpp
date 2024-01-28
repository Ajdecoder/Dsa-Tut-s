#include <bits/stdc++.h>
using namespace std;

int lps_string(string str, vector<int> &lps)
{
    int pre = 0, suff = 1, n = str.size();
    while (suff < n)
    {
        if (str[pre] == str[suff])
        {

            lps[suff] = pre+1;
            pre++;  
            suff++;
        }
        else
        {
            if (pre != 0)
                pre = lps[pre - 1];
            else
            {
                lps[suff] = 0;
                suff++;
            }
        }
    }
    return lps[n - 1];
}

int kmp(string haystack, string needle)
{
    int n = haystack.size(), m = needle.size();
    vector<int> lps(m, 0);
    lps_string(needle, lps); // Corrected this line

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
        return first - second; // Corrected this line
    }
    else
    {
        return -1;
    }
}

int main()
{
    string haystack = "sadbutsad";
    string needle = "sad";
    int result = kmp(haystack, needle); // Corrected this line

    if (result != -1)
    {
        cout << "Pattern found at index: " << result << endl;
    }
    else
    {
        cout << "Pattern not found." << endl;
    }

    return 0;
}
