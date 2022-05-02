#include<iostream>
using namespace std;

int main()
{
    int n=5;

     for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }

        if (i == 1)
            cout << "*";

        else
        {
            cout << "* ";
            for (int k = 1; k <= i - 2; k++)
            {
                cout << "  ";
            }

            cout << "* ";
        }

        cout << endl;
    }

     for (int i = 1; i <= n; i++)
    {

        for (int s = 1; s <= i - 1; s++)
        {
            cout << " ";
        }

        if (i == n)
            cout << "*";

        else
        {
            cout << "* ";
            for (int k = 1; k <= n - i - 1; k++)
            {
                cout << "  ";
            }
            cout << "* ";
        }

        cout << endl;
    }
       
    return 0;
}