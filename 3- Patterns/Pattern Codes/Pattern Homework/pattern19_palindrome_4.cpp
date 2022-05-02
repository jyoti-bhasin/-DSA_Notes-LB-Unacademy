#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int i,j,k;

    for(i=1; i<=n; i++)
    {
        for (k = 1; k <= n - i + 4; k++)
        {
            cout << "*";
        }

        for (j = 1; j <= i; j++)
        {
            cout << i << "*";
        }
        
        // it runs one less time for each 'i' than previous star loop
        for (k = 1; k <= n - i + 3; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}