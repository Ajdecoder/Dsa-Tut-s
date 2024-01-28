#include <iostream>
using namespace std;
int main()
{

    char arr[] = {'e', 'n', '\0', 'd', 'r', '\0', 'u', 'm'};
    string str = "endrum";

    int size = str.size();
    int length = str.length();

    int n = sizeof(arr);

    cout << endl<<  str.size();

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];

        if (str[i] == '\0')
        {
            cout << '@';
        }
    }
    cout << endl;

    cout << "printing string now" << endl;

    cout << endl;

    cout << "The size is " << size; 
    cout << endl;
    cout << "The length is " << length;

    return 0;
}