// #include <bits/stdc++.h>
// using namespace std;

// string rotateclockwise(string &s)
// {
//     char temp1 = s[s.size() - 1];
//     char temp2 = s[s.size() - 2];
//     int index = s.size() - 3;

//     while (index >= 0)
//     {
//         s[index + 2] = s[index];
//         index--;
//     }
//     s[0] = temp2;
//     s[1] = temp1;
//     return s;
// }

// string antirotateclockwise(string &s)
// {
//     char temp1 = s[0];
//     char temp2 = s[1];
//     int index = 0;

//     while (index < s.size())
//     {
//         s[index] = s[index + 2];
//         index++;
//     }

//     s[s.size() - 1] = temp2;
//     s[s.size() - 2] = temp1;
//     return s;
// }

// bool isRotated(string str1, string str2)
// {
//     if (str1.size() != str2.size())
//         return false;

//     string rotatedclockwise = str1;
//     rotateclockwise(rotatedclockwise);

//     if (rotatedclockwise == str2)
//         return true;

//     string rotatedanticlockwise = str1;
//     antirotateclockwise(rotatedanticlockwise);

//     if (rotatedanticlockwise == str2)
//         return true;

//     return false;
// }

// int main()
// {
//     string s1 = "amazon", s2 = "azonam";

//     cout << isRotated(s1, s2);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to rotate a string in-place clockwise by exactly 2 places.
    void rotateclockwise(string &s) {
        // Get the size of the string
        int n = s.size();
        // If the string has 0 or 1 character, or already has 2 characters, no need to rotate
        if (n <= 2) return;

        // Reverse the first 2 characters
        reverse(s.begin(), s.begin() + 2);
        // Reverse the rest of the string
        reverse(s.begin() + 2, s.end());
        // Reverse the entire string
        reverse(s.begin(), s.end());
    }

    // Function to rotate a string in-place anticlockwise by exactly 2 places.
    void rotateanticlockwise(string &s) {
        // Get the size of the string
        int n = s.size();
        // If the string has 0 or 1 character, or already has 2 characters, no need to rotate
        if (n <= 2) return;

        // Reverse the entire string
        reverse(s.begin(), s.end());
        // Reverse the first 2 characters
        reverse(s.begin(), s.begin() + 2);
        // Reverse the rest of the string
        reverse(s.begin() + 2, s.end());    
    }

    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    bool isRotated(string str1, string str2) {
        // If the sizes are different, strings cannot be rotated into each other
        if (str1.size() != str2.size())
            return false;

        // Rotate str1 clockwise
        rotateclockwise(str1);

        // Check if the rotated str1 matches str2
        if (str1 == str2)
            return true;

        // Rotate str1 anticlockwise
        rotateanticlockwise(str1);

        // Check if the rotated str1 matches str2
        if (str1 == str2)
            return true;

        // If no match is found, return false
        return false;
    }
};

int main() {
    Solution solution;
    string s1, s2;

    // Input two strings
    cin >> s1 >> s2;

    // Check if one string can be obtained by rotating the other by exactly 2 places
    cout << solution.isRotated(s1, s2);

    return 0;
}
