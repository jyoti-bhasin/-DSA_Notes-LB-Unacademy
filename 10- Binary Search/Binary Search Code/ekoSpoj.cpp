// https://www.spoj.com/problems/EKO/

#include<iostream>
#include<algorithm>
using namespace std;

bool isPossibleSol(int arr[], int n, int target, int mid){
    int sum = 0;
    for(int i=0; i<n; i++){
        int diff = 0;

        if(arr[i] > mid){
            diff = arr[i] -  mid;
            sum += diff;
        }
    }
    if (sum >= target){
        return true;
    }
    return false;
}

int getMaxHeight(int arr[], int n, int target){
    sort(arr, arr + n);
    int s = 0;
    int e = arr[n-1];
    int ans = -1;

    while(s<=e){
        int mid = s + (e - s) / 2;

        if(isPossibleSol(arr, n, target, mid)){
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1; 
    }
    return ans;
}

int main()
{
    int arr[] = {15, 8, 18, 6};
    int target =  30, n=4;

    
    int ans = getMaxHeight(arr, n, target);
    cout << "Answer is " << ans << endl;

    return 0;
}