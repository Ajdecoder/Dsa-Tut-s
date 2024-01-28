#include<bits/stdc++.h>
using namespace std;

string reverseString(string &str){
    stack<string> st;
    for(int i = 0; i < str.length(); i++){
        string word = "";
        while(i < str.length() && str[i] != ' '){
            word = word + str[i++];
        }
        st.push(word);
    }

    string reversedSentence = "";
    while(!st.empty()){
        reversedSentence += st.top() + " ";
        st.pop();
    }

    if (!reversedSentence.empty()) {
        reversedSentence = reversedSentence.substr(0, reversedSentence.length() - 1);
    }

    return reversedSentence;
}



int main(){
    
    string str = "Pg       ";
    string str2 = "hellobro";
    // cout<<  str2.substr(0,6);

    cout<<reverseString(str);

return 0;
}