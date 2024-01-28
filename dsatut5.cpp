#include<iostream>
using namespace std;
int main(){
    

            int a1 = 1;
            int b1 = 2;

            if (a1-- > 0 || ++b1 > 2)
            {
                /* code */
                cout << " Stage1 - Inside If " << endl;
            }
            else{
                cout<< " stage 2 - Inside else" << endl;
            }
            cout<< a1 << " " << b1 << endl;

            int f = 2;
            int t = ++f;
            cout<<f<<endl;
            
            int y = 3;
            cout<<(25 * (++y))<<endl;
            cout<<(25 * (y++))<<endl;

            int g = 1;
            int v = g++;
            int h = ++g;

            cout<<v<<endl;
            cout<<h<<endl;
    return 0;
}