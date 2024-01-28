#include <iostream>
#include <cmath>

using namespace std;

int binaryToDecimal(string n)
{
    int decimalNumber = 0, i = 0, remainder;
    int negative = (n[0] == '1') ? -1 : 1;
    for (int j = n.size() - 1; j > 0; j--) {
        if (n[j] == '1') {
            decimalNumber += pow(2, i);
        }
        i++;
    }
    return decimalNumber * negative;
}

int main()
{
    string binaryNumber;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    cout << binaryNumber << " in binary = " << binaryToDecimal(binaryNumber) << " in decimal";

    return 0;
}

