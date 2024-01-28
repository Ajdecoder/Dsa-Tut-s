#include<iostream>
using namespace std;
int main(){
    
    int num = 15,first=0,second=1,next;

    cout << first <<' '<< second <<' ';

    for (int i = 2; i < num; i++)
    {   
        next = first+second;    
        first = second;
        second = next;
    cout << next <<' ';
    }

return 0;
}