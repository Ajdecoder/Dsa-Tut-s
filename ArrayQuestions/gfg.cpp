#include<bits/stdc++.h>
using namespace std;
int main(){

        int A[] = {-2, 1, -4, 5, 3};
    	int mini = INT_MAX , maxi = 0, sum = 0;
    	for(int i = 0; i<5; i++)
    	{
    	    mini = min(mini,A[i]);
            cout<<mini<<" ";
    	}
        cout<<endl;
    	for(int i = 0; i<5; i++)
    	{
    	    maxi = max(maxi,A[i]);
            cout<<maxi<<" ";
    	}

return 0;
}