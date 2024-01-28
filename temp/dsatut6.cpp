#include<iostream>
#include<math.h>
using namespace std;
    

int main(){

//     int n;
//     cin >> n;

    
//     float ans = 0;
//     int i = 0;  
//     while (n != 0)
//     {
//         int bit = n & 1;

//         ans = (bit * pow(10 , i)) + ans;

//         n = n >> 1;

//         i++;
//     }
    
//     cout<<" Answer is " << ans << endl;
   int n;
    scanf("%d" , &n);
    
    if (n==1) {
    printf("one");
    }
   else if (n==2) {
    printf("two");
    }
   else if (n==3) {
    printf("three");
    }
   else if (n==4) {
    printf("four");
    }
   else if (n==5) {
    printf("five");
    }
   else if (n==6) {
    printf("six");
    }
   else if (n==7) {
    printf("seven");
    }
   else if (n==8) {
    printf("eight");
    }
    else if (n>9){
    printf("greater than 9");
    }

    return 0;
}

