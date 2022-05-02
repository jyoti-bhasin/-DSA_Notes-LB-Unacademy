#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int i,j,k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        for(k=j-2; k>=1; k--)
        {
            cout<<k<<" ";
        }
       cout<<endl;
    }
    return 0;
}