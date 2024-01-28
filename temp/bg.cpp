#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int num;
    cin>>num;

    int i = 0;
    int ans = 0;

        while (num != 0)
        {
            int digit = num%10;
            if(digit==1)
            ans = ans+pow(2,i);
            num = num/10;
            i++;

        }
        cout<<ans;

}