#include<stdio.h>
int main()
{
    float p,t;
    float r,si;
    printf("Enter value of Principle : ");
    scanf("%f",&p);
    printf("Enter value of Rate : ");
    scanf("%f",&r);
    printf("Enter value of Time (in Years) : ");
    scanf("%f",&t);
    si=(p*r*t) / 100;
    printf("value of simple interest is:=%f",si);
    printf("\n");
    return 0;
}