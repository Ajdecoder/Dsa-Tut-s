#include <queue>
#include <iostream>
using namespace std;
int main()
{

    queue<string> q;

    q.push("first");
    q.push("second");
    q.push("third");
    q.push("fourth");
    q.push("last");

    cout << q.front();

    cout << endl;
    q.push("Last_of_Last");

    cout << q.size() << endl;

    q.pop();

    cout << q.size() << endl;

    return 0;
}