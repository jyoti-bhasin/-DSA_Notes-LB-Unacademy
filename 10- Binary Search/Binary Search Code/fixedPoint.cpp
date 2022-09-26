#include <bits/stdc++.h>
using namespace std;

int fixed(int arr[], int n){
    int i =0;
    int start = 0, ans= -1;
    int end = n-1;
    int mid = start + (end - start) / 2;

    while(i<=n){
        if (arr[mid] == mid){
            return ans;
        }
        else if (arr[mid] > mid){
            start = mid - 1;
        }
        else 
            end = mid + 1;
        
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr []= {9, 2, 1, 3, 7, 0}, n = 6;
    cout << fixed(arr, n) << endl;

    return 0;
}
