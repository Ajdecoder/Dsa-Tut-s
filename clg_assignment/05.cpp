#include<iostream>
using namespace std;
int main(){
    
    int num,temp,rev;

    while (temp!=0)
    {
        rev = rev * 10;
        rev = rev + (temp%10);
        temp = temp/10;
    }
    
return 0;
}