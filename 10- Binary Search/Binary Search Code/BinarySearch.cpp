#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if (arr[mid] == key){
            return mid;
        }
        // Go to right part
        else if (key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int even[10] = {2, 4, 6, 10, 22, 34, 56, 68, 82, 90};
    int odd[9] = {1, 3, 5, 7, 19, 37, 61, 69, 89};
    int index_even = binary_search(even, 10, 56);
    int index_odd = binary_search(odd, 9, 100);

    cout << "Index of 56 is " << index_even << endl;
    cout << "Index of 100 is " << index_odd << endl;

    return 0;
}

