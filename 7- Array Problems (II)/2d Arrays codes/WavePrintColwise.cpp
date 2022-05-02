#include <iostream>
using namespace std;

void WavePrint(int m, int n, int arr[3][3])
{
    // Loop to traverse matrix
    for (int j = 0; j < n; j++)
    {
        // it in forward order
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        // it in reverse order
        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    WavePrint(3, 3, arr);

    return 0;
}