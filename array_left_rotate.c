#include<stdio.h>
int main()
{
int n,i,j;
printf("array size ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int t=a[0];
for(i=0;i<n-1;i++)
a[i]=a[i+1];
a[n-1]=t;

for(j=0;j<n;j++)
printf("%d\n",a[j]);
return 0;
}