#include <bits/stdc++.h>
using namespace std;

int main()
{

    // string str = "is2 sentence4 This1 a3";
    // cout << str;
    // cout << endl;
    // str.push_back(' ');
    // cout << str;
}

class Solution {
public:
    string sortSentence(string s) {
        s.push_back(' ');  // Add a space at the end to handle the last word
        vector<string> ans(10);  // Vector to store words based on their numeric values
        string temp = "";  // Temporary string to store each word
        int count = 0;  // Counter to keep track of the number of words

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                int position = temp[temp.size() - 1] - '0';  // Extract the numeric value of the word
                temp.pop_back();  // Remove the numeric value from the word
                ans[position] = temp;  // Store the word in the corresponding position based on its numeric value
                temp.clear();  // Clear the temporary string for the next word
                count++;  // Increment the word count
            } else {
                temp += s[i];  // Build the word by appending characters to the temporary string
            }
        }

        for (int i = 1; i <= count; i++) {
            temp += ans[i];  // Append each word to the result string
            temp += ' ';  // Add a space between words
        }
        temp.pop_back();  // Remove the trailing space

        return temp;  // Return the sorted sentence
    }
};
