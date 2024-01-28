#include<iostream>
#include<string>
using namespace std;

string rev(string str){
  
    int n = str.size();
    
    int s = 0;
    int e = n-1;
    while (s<e)
    {
        swap(str[s],str[e]);
        s++;
        e--;
    }
    return str;
}

int main(){
    
    string str;
    cin >> str;
    
    cout << rev(str);


}