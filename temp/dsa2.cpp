#include<iostream>
using namespace std;
int main()
{
    char ch  ;
    cout<<"Enter the number you want reference of\n";
    cin >> ch;
    if(ch >='a'&& ch <='z'){
        cout<<"this is lower case\n";
    }
    else if(ch >='A'&& ch <='Z'){
        cout<<"this is upper case";
    }
    else {
        cout<<"this is Numaric";
    }
    
    
    return 0;
}