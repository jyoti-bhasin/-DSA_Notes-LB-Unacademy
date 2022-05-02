#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int i,j,s;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}