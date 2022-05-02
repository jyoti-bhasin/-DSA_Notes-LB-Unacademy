#include<iostream>
using namespace std;

int main()
{
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        //for space in-between
        for(int s=1;s<=n-i;s++)
        {
            cout<<"  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        //for space in-between
        for(int s=1;s<=i-1;s++)
        {
            cout<<"  ";
        }

        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}