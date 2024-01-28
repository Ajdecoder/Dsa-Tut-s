#include<stdio.h>
#include<string.h>
int main() {
   char string[10];
    printf("Enter your colour\n");
    scanf("%s",&string);

    if (string=='Red')
    {
        printf("%s this is a Red colour",string);
    }
    else if (string=="Blue")
    {
        printf("%s this is a Blue colour",string);        
    }
    else if (string=="Green")
    {
        printf("%s this is a Green colour",string);
    }
    else if (string=="Yellow")
    {
        printf("%s this is a Yellow colour",string);
    }
    else if (string=="black")
    {
        printf("%s this is a black colour",string);
    }
    else
    {
        printf("%s Not a colour");
    }
    
    
    
    
    return 0;
}