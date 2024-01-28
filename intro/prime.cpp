#include <iostream>
using namespace std;

bool is_prime(int num) {
    return (num < 2) ? false :
           (num < 4) ? true :
           (num % 2 == 0 || num % 3 == 0) ? false : true;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (is_prime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
