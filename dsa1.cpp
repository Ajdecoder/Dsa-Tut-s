#include<iostream>
using namespace std;
int main()
{
    lable :
    int a ;
    cin>>a;
    char ch;
    double db;
    float fl;
    if (a<0){
        cout<<"-v\n"<<endl;
    }
    else if(a == ch){
    cout << "char\n"<<endl;
    }
    else if(a = db){
    cout << "double\n"<<endl;
    }
    else if(a = fl){
    cout << "float\n"<<endl;
    }
    else {
        cout<<"+v\n";
    }
    // goto lable;
    return 0;   
}


// {
//     int a = 2;
//     int b = a + 1;

//     if ((a=3)==b){
//             cout<<a;
//     }
//     else{
//         cout<<a+1;
//     }
//     return 0;
// }

// {

//     int a = 24;
//     if (a > 24){
//             cout<< "love";
//     }
//     else if(a==24)
//     cout << " babar";
//     cout << a;
// }
