// Peak index in a mountain array

#include <iostream>
using namespace std;

int peak(int arr[], int n) {
    int s = 0;
    int e = n-1;
        
    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid] < arr[mid+1])
            s = mid+1;
        else
            e = mid;
    }
    return e;
}

int main()
{
    int arr[4] = {0, 10, 5, 2};
    int n = 4;

    cout << "Peak Index: " << peak(arr,n) << endl;

    return 0;
}
