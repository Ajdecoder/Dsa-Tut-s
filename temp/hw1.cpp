#include<iostream>
using namespace std;
int main(){
    
        cout<<"by for loop"<<endl;
        int n;
        cin>>n;

                int count = 1;
        for(int i = 1 ; i<=n; i++){

            for(int j = 1 ; j<=i ; j++){

                cout<<count<<" ";
                count = count+1;
               
                
            }   

            cout<<endl;
    
        }

        cout<<"by while loop"<<endl;

        int num;
        cin>>num;

        int i = 1;
        while(i<=num){


                int j = 1;
            while(j<=i){

                cout<<i-j+1<<" ";
                j = j+1;

            }
            cout<<endl;
            i = i+1;
        }


    

    return 0;
}