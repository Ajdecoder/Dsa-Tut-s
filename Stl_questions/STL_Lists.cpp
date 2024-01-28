#include<list>
#include<iostream>
using namespace std;
int main(){
    
    list<int> l;

    list<int>n(9,34);
    
    for (int i : n)
    {
        cout << i <<' ';
    }

    cout << endl;

    l.push_back(13);
    l.push_front(2);

    for (auto i : l)
    {
        cout << i <<' ';
    }

    cout << endl;
    cout << l.size();
    

return 0;
}