#include <iostream>
using namespace std;

int main()
{
   int n,i, range;
   cout<<"enter a integer: "<<endl;
   cin>>n;
   cout<<"Enter a range: "<<endl;
   cin>>range;
   for(i=1;i<=range;i++)
    {

    cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
