#include <bits/stdc++.h>
using namespace std;

vector<int> computeLPS(const string &str)
{
    int n = str.size();
    vector<int> lps(n, 0);

    int pre = 0, suff = 1;

    while (suff < n)
    {

        if (str[pre] == str[suff])
        {
            lps[suff] = pre + 1;
            pre++, suff++;
        }

        else
        {
            if (pre == 0)
            {
                suff++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }

    return lps;
}

// Function to find the minimum characters to be added at the front to make the string palindrome
int minChar(string str)
{
    int presize = str.size();
    string revStr = str;
    reverse(revStr.begin(), revStr.end());
    str += "$" + revStr; // Concatenate the original and its reverse with a special character

    int m = str.size();
    vector<int> lps = computeLPS(str);

    int pos = str.find("$");

    string ansFrString = str.substr(pos + 1);
 
    cout << ansFrString <<'\n';
    return presize - lps[m - 1];
}

int main()
{

    int ans = minChar("abc");
    cout << ans;

    return 0;
}
