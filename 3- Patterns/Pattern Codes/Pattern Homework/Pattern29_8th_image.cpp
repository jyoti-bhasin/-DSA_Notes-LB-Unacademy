#include<iostream>
using namespace std;

int main()
{
    int n=3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        // for space in-between
        for (int s = 1; s <= i - 1; s++)
        {
            cout << "  ";
        }

        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // for space in-between
        for (int s = 1; s <= n - i; s++)
        {
            cout << "  ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}