// Find first and last occurence in an array

#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    int ans = -1;
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if (arr[mid]== key){
            ans = mid;
            end  = mid - 1;
        }
        
        else if (key > arr[mid]){
            start = mid + 1;
        }
        
        else if (key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurence(int arr[], int n, int key)
{
    int ans = -1;
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    
    while(start<=end){
        if (arr[mid]== key){
            ans = mid;
            start = mid + 1;
        }

        else if (key > arr[mid]){
            start = mid + 1;
        }

        else if (key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{
    int even[6] = {5,7,7,8,8,10};

    cout << "First occurrence of 4 is at index " << firstOccurence(even,6,8) << endl;
    cout << "Last occurrence of 4 is  at index " << lastOccurence(even,6,8) << endl;
    
    return 0;
}

    // int even[6] = {2, 4, 4, 6, 8, 10};
    // int odd[5] = {1, 3, 5, 9, 5};
