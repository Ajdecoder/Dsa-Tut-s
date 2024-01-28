#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >>t;

    while(t--){

        int hash[9] = {1,1,1,1,1,1,1,1,1};

        int a,b,c,d;
        cin >> a >> b >> c >> d;

        int cnt = 0;

        while(a<=b){

            if(hash[a] == 1){
                cnt++;
            }

            hash[a] = 0;
            a++;
        }

        while(c<=d){
            if(hash[c] == 1){
                cnt++;
            }

            hash[c] = 0;
            c++;
        }

        cout << "ans: " << cnt << endl;


    }
}