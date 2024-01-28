#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
        
    }   
        return 0;
    
}

int main()
{

    int arr[10] = {2, 7, 9, 3, 10, 29, 12, 23, 62, 11};

    cout << " Enter the ley you want to search for" << endl;

    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << " the key is peresent" << endl;
    }
    else

        cout << " the key is absent" << endl;

    return 0;
}