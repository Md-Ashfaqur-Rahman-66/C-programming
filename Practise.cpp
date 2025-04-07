#include<iostream>
using namespace std;
int main()
{
    long bound;
    cout<<"Enter a positive integer: ";
    cin>>bound;
    cout<<"Factorial numbers< "<< bound<<":\n1, 1";
    long f=1, i=1;
    do
    {
        f=f*i;
        i++;
        cout<<", "<<f;
    }while(f<bound);
    return 0;
}
