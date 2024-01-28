#include<bits/stdc++.h>
using namespace std;
int main(){
  int n=5;
//   cin>>n;
  int i=1;
  int j,num,k,l;
  while(i<=n){
    j=n-i+1;
    num=1;
    while(j>0){
      cout<<num<<" ";
      num++;
      j--;
    }
    k=(i-1)*2;
    while(k>0){ //stars
      cout<<"* ";
      k--;
    }
    l=n-i+1;
    num=n-i+1;
    while(l>0){
      cout<<num<<" ";
      num--;
      l--;
    }
    
    cout<<endl;
    i++;
  }
  
}