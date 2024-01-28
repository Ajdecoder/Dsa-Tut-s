#include<vector>
#include<iostream>
using namespace std;

void print(vector<int> vec , int n){
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    
}

int main(){
    
    vector<int> vec;

    vec.push_back(11);
    vec.push_back(13);
    vec.push_back(8);
    vec.push_back(3);
    vec.push_back(12);
    vec.push_back(16);

    int s = 0;
    int e = vec.size()-1;   
    while (s<=e)
    { 
        swap(vec[s],vec[e]);
        s++;
        e--;
    }
    
    
    int n = vec.size();

    print(vec,n);

    

}