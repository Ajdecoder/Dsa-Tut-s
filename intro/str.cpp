#include <iostream>
using namespace std;

bool palindrome(string str, int n)
{

    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (str[s] != str[e])
        {

            return 0;
        }

        else
        {
            s++;
            e--;
        }
    }

    return 1;
}

int len(char str[])
{

    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}

void rev(char str[], int n)
{

    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(str[s++], str[e--]);
    }
}

int main()
{

    char str[10];

    cin >> str;
    int n = len(str);

    cout << " Name is: " << str;
    cout << endl;
    cout << " length is: " << n;

    rev(str, n);
    cout << endl;
    cout << " Name after rev is: " << str;

    cout << endl;

    if (palindrome(str, n))
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome " << endl;
    }

    // cout << palindrome(str,n);

    //     for (int i = 0; i <n; i++)
    //     {
    //         /* code */
    //     str.pop_back();
    //     }
    // cout << str.size();
    // cout << endl;
    //     cout<< str;
    // return 0;
}