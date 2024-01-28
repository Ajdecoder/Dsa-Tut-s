#include <iostream>
#include <set>
using namespace std;
int main()
{

    set<int> s;

    s.insert(3);
    s.insert(2);
    s.insert(6);
    s.insert(1);
    s.insert(7);
    s.insert(3);

    for (auto &&i : s)
    {
        cout << i << endl;
    }

    set<int>::iterator it = s.begin();

    it = it++;

    set<int>::iterator itf = s.find(3);

    s.erase(it);
    cout << endl;

    for (auto &&i : s)
    {
        cout << i << endl;
    }

    cout << endl;

    cout << *itf;

    cout << endl;

    // cout << s.count(3);
    // cout << s.count(33);

    cout << "value present at it:-" << *itf;

    return 0;
}