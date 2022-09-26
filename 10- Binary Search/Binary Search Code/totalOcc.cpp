// Find total no. of occurrence of a n.

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int x){

    int ans = 0;
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == x){
            ans = mid;
            end = mid - 1;
        }

        else if (x > arr[mid]){
            start = mid + 1;
        }

        else if (x < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int x){
    int ans = 0;
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == x){
            ans = mid;
            start = mid + 1;
        }

        else if (x > arr[mid]){
            start = mid + 1;
        }

        else if (x < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int count(int arr[], int n, int x){
    int total = 0;
    int f = firstOcc(arr, n, x);
    int l = lastOcc(arr, n, x);
    total = (l - f) + 1;
    return total;
}

int main()
{
    int n = 7, key = 4;
    int arr[] = {1, 1, 2, 2, 2, 2, 3};
    firstOcc(arr, n, key);
    lastOcc(arr, n, key);
    
    cout << count(arr, n ,key) << endl;

    return 0;
}
