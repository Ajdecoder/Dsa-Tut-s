#include <iostream>
using namespace std;

int star_pattern1(int num)
{

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int star_pattern2(int num)
{

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int star_pattern3(int num)
{

    int i = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}

int star_pattern4(int num)
{

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int star_pattern5(int num)
{

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            cout << i - j + num << " ";
        }
        cout << endl;
    }
}
int count_print(int num)
{

    int count = 1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

    int Alphabet_print(int num){

            char alph = 'A';

            for (int i = 0; i < num; i++)
            {
                for (int j = 0; j < num; j++)
                {
                    cout << alph+num-i;
                    alph++;
                }
                cout << endl;
            }
            

    }


int main()
{

    int num = 5;
    // cin >> num;

    //    star_pattern1(num);
    //    star_pattern2(num);
    //    star_pattern3(num);
    //    star_pattern4(num);
    //    star_pattern5(num);
       count_print(num);
    //    Alphabet_print(num);
}