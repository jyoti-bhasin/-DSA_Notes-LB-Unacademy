#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int count =0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            count++;
            cout << count;
            if (j == i)
            {
                break;
            }
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        count = count - (n-i+1);
        for (int j = 1; j <= n-i+1; j++)
        {
            count++;
            cout<<count;

            if (j == n-i+1)
            {
                break;
            }
            cout << "*";
        }
        count=count-(n-i+1);
        cout << endl;
    }
    return 0;
}