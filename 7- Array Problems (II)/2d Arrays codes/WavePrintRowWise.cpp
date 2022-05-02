#include<iostream>
using namespace std;

void WavePrint(int m, int n, int arr[3][3])
{
    // Loop to traverse matrix
    for (int i = 0; i < n; i++) {
        // it in forward order
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << arr[i][j] << " ";
            }
        }
        // it in reverse order
        else {
            for (int j = m - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    WavePrint(3, 3, arr);
    return 0;
}