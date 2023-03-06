//leap year or not 
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    (a%4==0)?printf("leap year"): (a%400==0)?printf("leap year"): (a%100!=0)?
    printf("not leap year"):
    printf("not leap year");

    return 0;


}