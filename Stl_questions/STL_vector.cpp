#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(10);
    arr.push_back(34);
    

    cout << arr.capacity();
    cout << endl;


    cout << "front " << arr.front() <<endl;
    cout << "back " << arr.back() <<endl;
    cout << "atIndex " << arr.at(3) <<endl;

    cout << "poping_lastIndex " << endl;
    arr.pop_back();

    cout << "poping_firstIndex " << endl;
    int n = arr.size(); 
    arr.insert(arr.begin()+1,43);


    for (int i = 0; i < n; i++)
    {
    cout << arr[i] << ' ';
    }
    
return 0;
}