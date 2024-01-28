#include<iostream>
#include<deque>
using namespace std;
int main(){
    
    deque<int> d;
    d.push_back(3);
    d.push_front(1);
    d.push_back(34);
    d.push_back(4);
    // d.pop_back();    
    // d.pop_front();
    

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] <<" " << endl;
    }   
    
    cout << endl;

    for (auto &&i : d)
    {
        cout << i <<endl; 
    }
    


    cout << "1st Index elem " << d.at(1) << endl;

    cout << d.front();
    cout<< endl;
    cout << d.back();
    cout << endl;   
    cout << "before erase " << d.size() << endl;
    (d.erase(d.begin(),d.begin()+1));
    // (d.erase(d.begin(),d.begin()+2));
    cout << "after erase " << d.size() << endl;

return 0;
}