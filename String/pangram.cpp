#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "The quick brown fox jumps over the lazy dog";
    vector<bool> check(26, 0);

    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            int index = tolower(str[i]) - 'a';
            check[index] = 1;
        }
    }

    bool isPangram = true;

    for (int i = 0; i < 26; i++)
    {
        if (check[i] == 0)
        {
            isPangram = false;
            break;
        }
    }

    cout<<isalpha(6);

    // if (isPangram)
    // {
    //     cout << "It is a Pangram";
    // }
    // else
    // {
    //     cout << "It is not a Pangram";
    // }
   
    // return 0;
}
