#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;

    cout<<" a&&b "<<(a&&b)<< endl;
    cout<<" a||b "<<(a||b)<< endl;
    cout<<" ~a "<< ~a << endl;  
    cout<<" a^b "<<(a^b)<< endl;  
    cout<<" a&b "<<(a>>b)<< endl; 
    
    cout << a << endl;
    cout << (a++) <<"\n";
    cout << (++a) <<"\n";
    return 0;
}