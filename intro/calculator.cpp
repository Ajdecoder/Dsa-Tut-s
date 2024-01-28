#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<" Welcome to the calculator"<<endl;

    cout<<" enter value of a and b"<<endl;
    cin>>a>>b;

    char operation;
    cout<<" Enter the operation you want to perform"<<endl;
    cin>>operation;

    switch (operation)
    {
    case '+' :
       cout << (a+b) <<endl;
        break;
    case '-' :
       cout << (a-b) <<endl;
       break;
    case '/' :
       cout << (a/b) <<endl;
       break;
    case '%' :
       cout << (a%b) <<endl;
       break;
    case '*' :
       cout << (a*b) <<endl;
       break;

    default:
    cout << " Enter a valid operation";
        break;
    }
}
