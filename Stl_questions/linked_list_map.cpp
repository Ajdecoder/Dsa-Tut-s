#include<iostream>
// #include<string>
#include<map>
using namespace std;
int main(){
    
    map<int,string > m;

    m[1] = "Anuj";
    m[2] = "Kumar";
    m[3] = "Shrivastav";
    m[4] = "Abhishek";

    m.insert({5,"Sankrant"});

    cout << "Before erase" <<endl;

for (auto i : m)
{
    cout << i.first << " : " << i.second << endl;

}


m.erase(3);

cout << "Finding 3 " << m.count(3);

auto itr = m.find(5);

for (auto i = itr; i != m.end(); i++)
{
    cout << " find:- "<< (*i).first << " " << (*i).second <<endl;
}



return 0;

}