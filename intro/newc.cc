#include<bits/stdc++.h>
using namespace std;

class Solution 
{
private:
    
    // To remove all the non Alphanumeric Characters
    bool validCharacter(char ch)
    {
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch <= '9')
        {
            return 1;
        }
        return 0;
    }
	
    
    //To lowercase all the character
        char toLowerCase(char ch)
        {
            if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
            {
                return ch;
            }
            else
            {
                char temp = ch + 32; //its same thing
                // char temp = ch -'A'+'a'; 
                return temp;
            }
        }
    
    //To check Palindrom
    bool checkpPalindrom(string s)
    {
        int start = 0,end=s.length()-1;
        while(start<=end)
        {
            if(s[start] != s[end]) {return 0;}
            else{start++;end--;}
        }
        return 1;
    }
    
public:    
    bool isPalindrome(string s) 
    {
        string str1 = "";
        for(int i=0;i<s.length();i++) 
        {    
            if(validCharacter(s[i])){str1.push_back(s[i]);}
        }
        
        for(int j=0;j<str1.length();j++)
        {
            str1[j] = toLowerCase(str1[j]);
        }
        return checkpPalindrom(str1);
    }
    
};

int main(){
    Solution sol;
    cout << sol.isPalindrome("MYNAME");
}