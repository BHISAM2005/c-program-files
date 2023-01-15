#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER FIRST SIDE OF TRIANGLE ");
	scanf("%d",&a);
	printf("ENTER SECOND SIDE OF TRIANGLE ");
	scanf("%d",&b);
	printf("ENTER THIRD SIDE OF TRIANGLE ");
	scanf("%d",&c);
	if (a+b>c&&b+c>a&&a+c>b)
	printf("IT IS A VALID TRIANGLE ");
	else 
	printf("NOT A VALID TRIANGLE ");
	
}