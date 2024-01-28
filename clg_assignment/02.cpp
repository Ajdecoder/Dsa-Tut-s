#include<stdio.h>
using namespace std;
int main(){
    
    float b,h;
    printf("Enter The Breadth of Triangle:");
    scanf("%f",&b);
    printf("Enter The Height of Triangle:");
    scanf("%f",&h);

    float area = (0.5*b*h);


    printf("The area of Triangle is %f",area);

return 0;
}