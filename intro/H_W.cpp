#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 0;
    int sum = 0;

    while (i<=n)
    {
        if (n%2 == 0)
        {

        sum = sum + i;
        }
        
        i = i+1;
        cout << sum ;    
    }
    

    
return 0;
}