// swap variables using call by value

#include<stdio.h>
void swap(int p,int q)
{
	int t=p;
	p=q;
	q=t;
	printf("values after swap:a=%d and b=%d",p,q);
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("values before swap:a=%d and b=%d",a,b);
	swap(a,b);
	
	return 0;
}