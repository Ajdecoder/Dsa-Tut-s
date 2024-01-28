#include <iostream>
using namespace std;

bool Even()
{

    int num;
    cin >> num;

    if (num & 1 == 1)
    {
        cout << num << " Is Odd" << endl;
    }
    else
        cout << num << " Is Even" << endl;
}


int main()
{
    Even();
}