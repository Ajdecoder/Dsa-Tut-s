#include<iostream>
#include<stack>
using namespace std;
int main(){
    
    stack<string> s;


    s.push("first");
    s.push("second");
    s.push("third");
    s.push("fourth");
    s.push("last");

    // cout << s.top() <<endl;
    // s.pop();
    // cout << s.top() <<endl;
    // s.pop();
    // cout << s.top() <<endl;
    // s.pop();
    // cout << s.top() <<endl;
    // s.pop();
    // cout << s.top() <<endl;
    // s.emplace();

    for (int i = 0; i < s.size(); i++)
    {
        cout << s.top() << " ";
        s.pop();
    }cout<< endl;
    

    cout << "The size of stack is " << s.size();

    cout << endl;
    cout << s.empty();

return 0;
}