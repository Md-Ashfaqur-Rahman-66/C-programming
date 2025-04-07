#include<stdio.h>
int main()
{
    double m,n,p,q;
    printf("put the value of x+y and x-y :");
    scanf("%lf %lf",&m, &n);
    p=(m+n)/2;
    q=(m-n)/2;
    printf("The value of x is %0.2lf\nThe value of y is %0.2lf",p,q);
    return 0;
}
