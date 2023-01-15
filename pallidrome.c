// program to check whether a no is pallindrome or not 
#include<stdio.h> 
int main()
{
int t,a,r,sum=0;
printf("enter any no to check pallidrome : ");
scanf("%d",&a);
t=a;
while(a>0)
{
    r=a%10;
    sum=(sum*10)+r;
    a=a/10;
}
if(t == sum)
{   printf("given no is pallindrome\n");
}      
else
    printf("given no is NOT pallindrome\n");
    
return 0;
}