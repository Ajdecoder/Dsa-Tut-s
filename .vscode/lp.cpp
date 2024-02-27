#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "this is first statement " << i << endl;

        for (int j = 0; j < 4; j++)
        {
            cout << endl;
            cout << "this is first statement " << j << endl;
            for (int k = 0; k < 3; k++)
            {
                cout << endl;
                cout << "this is first statement " << k << endl;

                for (int l = 0; l < 2; l++)
                {
                    cout << endl;
                    cout << "this is first statement " << l << endl;
                    for (int m = 0; m < 1; m++)
                    {
                        cout << endl;
                        cout << "this is first statement " << m << endl;
                    }
                }
            }
        }
    }

    return 0;
}