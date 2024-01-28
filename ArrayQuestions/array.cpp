#include <iostream>
using namespace std;
int main()
{
    
    int array[] = {45, 65, 879, 456, 75, 23, 165, 46, 58};

    int i = 0;
    cout << "We are inside while loop " << endl;
    while (i < 9)
    {

        cout << array[i] << endl;
        i++;
    }
    cout << "We are inside do while loop now " << endl;
    do
    {
        cout << array[i] << endl;
        i++;
    } while (i < 9);

    return 0;
}
