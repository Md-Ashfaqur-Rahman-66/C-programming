#include <iostream>
using namespace std;

int main()
{
   int n, i, j, sum;
   cout<<"Summation of Prime Numbers: "<<endl;
   cout<<"Enter a liming integer number: "<<endl;
   cin>>n;
   if(n==0 || n==1)
   {
       sum=0;
   }
   else
   {
       sum=2;
       for(i=2;i<=n;i++)
       {
           for(j=2; j<i; j++)
           {
               if(i%j==0)
               {
                 break;
               }
               else if(j==(i-1))
                sum=sum+i;
           }
       }
   }
   cout<<"Sum of Prime Numbers is= "<<sum;
   return 0;
}
