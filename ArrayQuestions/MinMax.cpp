#include <iostream>
#include <climits>
using namespace std;
int main()
{
        int n[100];
        int size;
        cout << "Enter The size of array " << endl;
        cin >> size;
        cout << "Now printing The array:"<<  endl;
        for (int i = 0; i < size; i++)
        {
                cin >> n[i];
                cout << n[i] <<" ";
        }

        return 0;
}