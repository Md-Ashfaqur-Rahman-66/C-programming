#include<iostream>
using namespace std;
int main()
{int =44;
cout<<"n="<<n<<endl;
{int n://peextendsover4lines
cout<<"Enter an integer:";
cin>>n;
cout<<"n="<<n<<endl;}
{cout<<"n="<<n<<endl;//thefirstdeclaredn}
{int n//scopeextendsover2lines
cout<<"n="<<n<<endl;}
cout<<"n="<<n<<endl;//thefirstdeclaredn}
