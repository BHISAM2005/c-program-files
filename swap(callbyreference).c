// swap variables using call by reference

#include<stdio.h>
void swap(int *p,int *q)
{
	int t=*p;
	*p=*q;
	*q=t;
	
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("values before swap:a=%d and b=%d\n",a,b);
	swap(&a,&b);
	printf("values after swap:a=%d and b=%d",a,b);
	return 0;
}