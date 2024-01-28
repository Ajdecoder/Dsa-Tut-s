#include <bits/stdc++.h>
using namespace std;

int findUsingLps(string str, string match)
{
    int n = str.size(), m = match.size();
    int first, second;
    for (int i = 0; i <= n - m; i++)
    {
        first = i, second = 0;

        while (second < m)
        {
            if (str[first] == match[second])
            {
                first++, second++;
            }
            else
            break;
        }

        if (second == m)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string str = "cdeabroab";
    string match = "bcdeab";
    str += str;

    int find = findUsingLps(str, match);
    
    cout << find <<" " << str.substr(find);



    return 0;
}
