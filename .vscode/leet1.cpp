#include<iostream>
// #include<math.h>
// #include<limits.h>
using namespace std;
int main(){
    cout<<"Enter a number you want complement of"<<endl;

    int n;
    cin>>n;

    int mask = 0;

    int ans;

    while (n != 0)
    {
        mask = (mask << 1) | 1;

        n = n >> 1;
    }

    ans = (~n) & mask;

   cout<<ans;
    
}

