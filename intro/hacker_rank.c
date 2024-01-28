#include<stdio.h>
int main(){

    int n,j,i;

    scanf("%d",&n);
    for (i = n; i >=1 ; i--)
    {   
        for (int i = 0; i < 1; i++)
        {
            printf("%d ",j);
        }
        
        for ( j = 1; j <= i*2-1; j++)
        {
            printf("%d ",i);
        }
            printf("\n");
        
    }
    

}