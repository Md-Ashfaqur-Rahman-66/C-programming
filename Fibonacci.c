#include<stdio.h>
int main()
{
    int m=0,n=1,p=m+n;
    printf("%d_%d_",m,n);
    while(p<=2971215073)
    {
        printf("%d_",p);
        m=n;
        n=p;
        p=m+n;
    }
}
