#include<iostream>
using namespace std;
int main()
{
    double a,b,r;
    wchar_t s;
    cout<<"Put two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Which operation do u want to execute?"<<endl;
    cin>>s;
    if(s=="+")
    {
        r=a+b;
    }
    else if(s=="-")
    {
        r=a-b;
    }
    else if(s=="*")
    {
        r=a*b;
    }
    else if(s=="/")
    {
        r=a/b;
    }
    return 0;
}
