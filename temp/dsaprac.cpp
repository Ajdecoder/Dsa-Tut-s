#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int num;
    cin>>num;

    int i = 0;
    float ans = 0; 
    while (num != 0)
    {
        int bit = num&1;
        ans = (bit * pow(10,i) )+ ans;
        num = num >> 1;
        i++;
    }

    cout<<ans<<endl;
    

    return 0;
}