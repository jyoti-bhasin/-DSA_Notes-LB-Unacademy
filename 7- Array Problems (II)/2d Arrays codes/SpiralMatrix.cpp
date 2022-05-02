#include <iostream>
using namespace std;

int main()
{
    int row = 3, col = 3;
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int count = 0;
    int total = row * col;
    int sr = 0;       // sr=StartingRow
    int sc = 0;       // sc=StartingCol
    int ec = col - 1; // ec=EndingCol
    int er = row - 1; // er=EndingRow

    while (count < total)
    {
        // First part(starting row)
        for (int i = sc; i <= ec; i++)
        {
            cout << arr[sr][i] << " ";
            count++;
        }
        sr++;

        // second part(ending col)
        for (int i = sr; i <= er; i++)
        {
            cout << arr[i][ec] << " ";
            count++;
        }
        ec--;

        // Third part(ending row)
        for (int i = ec; i >= sc; i--)
        {
            cout << arr[er][i] << " ";
            count++;
        }
        er--;

        // Fourth part(starting col)
        for (int i = er; i >= sr; i--)
        {
            cout << arr[i][sc] << " ";
            count++;
        }
        sc++;
    }
    return 0;
}