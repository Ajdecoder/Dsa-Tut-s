#include<iostream>
using namespace std;
int main(){

        // int a , b;
        // cin >> a >> b;

        // if (a>b)
        // {
        //     cout << " ans is a " << a << endl;
        // }
        // else
        //     cout << " ans is b " << b << endl;

        int num;
        cin >> num;

        // int i = 1;
        // int sum = 0;

            // while (i<=num)
            // {
            //     sum = sum + i;
            //     i++;
            // }

            // cout << sum;

            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    cout << num << " is not prime no for " << i << endl;
                }

                else
                    cout << num << " is  prime no for " << i << endl;
                
            }
            
            

}