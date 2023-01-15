// program to calculate compount interest
#include<stdio.h>
#include<math.h>
int main()
{
    float a,p,r,t,n,ci,w,x,y,z; // here p = principle , r = rate , t = time 
    //ci = compound interest , n = no of times interest applied for time period 
     printf("Enter value of Principle : ");
    scanf("%f",&p);
    printf("Enter value of Rate : ");
    scanf("%f",&r);
    printf("Enter value of Time (in Years) : ");
    scanf("%f",&t);
    printf("Enter no of times interest applied : ");
    scanf("%f",&n);
   /* x=r/100;
    y=1+x;
    z=pow(y, n); // another method
    w=p*z;
    a=w;
*/
    a=p*(pow((1 + (r / 100)), n));// Amount
    ci=a-p;// CI = Amount - Principal
    /*printf("value =%f\n",x);
    printf("value =%f\n",y);
    printf("value =%f\n",z);
    printf("value =%f\n",w); */
    printf("the value of amount is := %f\n", a);
    printf("the value of Compound Interest is := %f\n", ci);
    printf("\n");
    return 0;
}