#include<iostream>
using namespace std;
int main(){
    
    int age;
    scanf("%d",&age);
    bool Eligible = age>=18?true:false;

    if (Eligible)
    {
        printf("Eligible ");
    }
    else
    printf("Not Eligible");

}