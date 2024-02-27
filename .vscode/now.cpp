#include <iostream>
using namespace std;

int No_OfNotes_required(int amount)
{

    int notes_of_100 = amount / 100;
    int notes_of_50 = (amount % 100) / 50;
    int notes_of_20 = ((amount % 100) % 50) / 20;
    int notes_of_1 = (((amount % 100) % 50) % 20);

    cout << "Number of notes:" << endl;
    switch (notes_of_100)
    {
    case 0:
        break;
    default:
        cout << "Rs. 100: " << notes_of_100 << endl;
    }
    switch (notes_of_50)
    {
    case 0:
        break;
    default:
        cout << "Rs. 50: " << notes_of_50 << endl;
    }
    switch (notes_of_20)
    {
    case 0:
        break;
    default:
        cout << "Rs. 20: " << notes_of_20 << endl;
    }
    switch (notes_of_1)
    {
    case 0:
        break;
    default:
        cout << "Rs. 1: " << notes_of_1 << endl;
    }
}

int main()
{

    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    No_OfNotes_required(amount);

    return 0;
}
