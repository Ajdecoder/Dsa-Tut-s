#include <iostream>
using namespace std;

//     int main(){
//     int n;
//     cin>>n;
//     int row = 1;

//     while(row<=n){

//         int column = 1;
//         while(column<=n){

//             cout<<"*";
//             column = column-1;
//         }

//         cout<<endl;
//         row = row-1;

//     }

// }
// int a;
// char b;
// double d;
// float f;

// cout<<sizeof(a)<<endl;
// cout<<sizeof(b)<<endl;
// cout<<sizeof(d)<<endl;
// cout<<sizeof(f)<<endl;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}