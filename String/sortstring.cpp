#include <iostream>

int main() {
    // Loop through ASCII values (0 to 127)
    for (int i = 0; i < 128; ++i) {
        // Print ASCII value and corresponding character
        std::cout << "ASCII value: " << i << "  Character: " << char(i) << std::endl;
    }

    return 0;
}
