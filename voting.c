#include<stdio.h>
int main()
{
    int a;
    printf("enter age of person : ");
    scanf("%d",&a);
    a>=18?printf("eligible for vote\n"):printf("not eligible for vote\n");
    return 0;
}