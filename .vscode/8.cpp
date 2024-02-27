#include<iostream>
// #include<limits.h>
using namespace std;


int root()
{   
    int val1 , val2;

    cin>>val1>>val2;

    int ans = 1; 

    for (int i = 1; i <= val2; i++)
    {
      ans = ans * val1; 
    }
    cout << " The answer is "<< ans;
    
}


int main(){

    root();
    root();
    root();
    root();
    root();
    
}