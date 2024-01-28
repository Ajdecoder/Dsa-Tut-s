#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    
    vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);

    cout << binary_search(v.begin(),v.end(),(4)) << endl;

    vector<int> :: iterator itr;

    
    


return 0;
}