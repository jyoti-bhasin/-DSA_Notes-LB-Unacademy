// Search in rotated sorted array

#include <iostream>
using namespace std;

int search(int arr[],int n, int target){
    int s = 0;
    int e = n-1;

    while (s <= e){
        int mid = s + (e - s) / 2;
        if(arr[mid] == target)
            return mid;

        if(arr[s] <= arr[mid]){
            if(target >= arr[s] && target <= arr[mid])
                e = mid - 1;
            else
                s = mid + 1;
        }

        else{
            if (target >= arr[mid] && target <= arr[e])
                s = mid + 1;
            else
                e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n = 7, target = 1;
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int t = search(arr,n,target);

    if(t!=-1)
        cout << "Found at index " << t << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
