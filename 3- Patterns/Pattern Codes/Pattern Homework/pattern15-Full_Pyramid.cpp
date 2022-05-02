#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int i,j,k,s;
    for(i=1; i<=n; i++)
    {
        for(s=1; s<=n-i; s++)
        {
            cout<<" ";
        }
        k=i;
        for(j=1; j<=i; j++)
        cout<<k++;

        k=k-2;
        for(j=1; j<i; j++)
        cout<<k--;

        cout<<endl;
    }


   return 0;
}