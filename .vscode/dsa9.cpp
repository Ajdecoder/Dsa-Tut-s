#include <iostream>

using namespace std;

void update(int array[], int count)
{

    cout << "inside the update function" << endl;

    array[2] = {34};
    int update_array;

    for (int i = 0; i < count; i++)
    {
        cout << array[i] << " ";
    }
} 
int main()
{

    cout << "inside the main function" << endl;

    int array[5] = {0, 1, 2, 3, 4};
    int count;
    cin >> count;

    update(array, count);

    cout << "printing the main function" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << array[i] << " " << endl;
    }

    return 0;
}