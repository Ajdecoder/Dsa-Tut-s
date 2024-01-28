#include <bits/stdc++.h>
using namespace std;

vector<int> lpsFind(string str)
{
    int pre = 0, suff = 1, n = str.length();
    vector<int> lps(n,0);

    while (suff<n)
    {
        if (str[pre] == str[suff])
        {
            lps[suff] = pre+1;
            pre++,suff++;
        }
        
    }
    

}

int main()
{

    return 0;
}