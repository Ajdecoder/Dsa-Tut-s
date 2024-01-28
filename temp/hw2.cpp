#include<iostream>
using namespace std;
int main(){

    int num;
    cin>>num;

    int i = 1;
    
    while(i<=num)
    {
        int j = 1;
        int value = i;
        while(j<=i)
        {
            cout<<value<<" ";
            value = value + 1;
            // cout<<i;
            j = j+1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}  