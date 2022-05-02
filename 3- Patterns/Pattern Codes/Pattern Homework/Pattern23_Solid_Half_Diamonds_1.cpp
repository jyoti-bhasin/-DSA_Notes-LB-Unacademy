#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int i,j;

        for(i=1; i<=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i + 2;
        }
        cout << endl;
    }

        for (int i = 1; i <= n-1 ; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << n + 2 - i;
        }
        cout << endl;
    }

    return 0;
}