#include<iostream>
using namespace std;
int main(){
    
    int num;
    cin>>num;

   int i = 1;

    while(i<=num)
    {
        int column = 1;
        while(column<=i){
            cout<<column<<" ";
        column = column + 1;
        }
        cout<<endl;
        i = i+1 ;
    
    }

}

//     return 0;

//         int n;
//         cin>>n;

//         int row = 1;
//         while(row<=n)
//         { 
//             int column = 1;
//             while(column<=n){
//                 char alp = 'A'+ row-1 ;
//                 cout<<" ";
//                 cout<<alp;
//                 // cout<<row;
//                 column = column+1;

//             }
//             cout<<endl;
//             row = row + 1;
//         }

// }