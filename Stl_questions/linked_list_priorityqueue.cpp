#include<iostream>
#include<queue>
using namespace std;
int main(){
    
    priority_queue<int> maxi;

    priority_queue<int,vector <int>,greater <int> >mini;

    maxi.push(4);
    maxi.push(8);
    maxi.push(4);
    maxi.push(7);

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top();
        maxi.pop();
    }

        cout << endl;

    cout << mini.empty();

        cout << endl;

   mini.push(1);   
   mini.push(2);   
   mini.push(3); 
   mini.push(4);   

        int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top();
        mini.pop();
    }

return 0;
}