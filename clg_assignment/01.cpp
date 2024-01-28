#include<stdio.h>
using namespace std;
int main(){
    
    char v;
    scanf("%c",&v);

    bool C1 = (v == 'a'|| v == 'e'|| v == 'i'|| v == 'o'|| v == 'u');
    bool C2 = (v == 'A'|| v == 'E'|| v == 'I'|| v == 'O'|| v == 'U');

    if (C1||C2)
    {
        printf("%c Is a Vovel ",v);
    }
    else
    printf("%c Is a Consonent ",v);
    

return 0;
}