#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for (i = n; i >= 1; i--)
    {
        int count = (2*i-1); 
        for (j = 1; j <= count; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        
    }
    

return 0;
}