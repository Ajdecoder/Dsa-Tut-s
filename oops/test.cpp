#include <bits/stdc++.h>
using namespace std;

class Animal
{

private:
    int num;
    int num1;
    static int num2;

public:
    void setNum()
    {
        cin >> num;
    }
    void printNum()
    {
        cout << "The number is : " << num;
        cout << "The number is : " << num1;
        cout << "The number is : " << num2;
    }
};

main()
{

    Animal ani;
    ani.setNum();
    ani.printNum();
    return 0;
}