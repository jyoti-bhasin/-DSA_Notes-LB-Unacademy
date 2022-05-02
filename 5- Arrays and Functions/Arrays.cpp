#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int getMaxFromArray(int arr[], int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, arr[i]);
    }
    return ans;
}

int getMinFromArray(int arr[], int n)
{
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, arr[i]);
    }
    return ans;
}

void SwapAlternates(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
        i = i + 2;
    }
}

// Sort 0's , 1's , 2's.
int sortZeroOneTwo(int arr[], int n)
{
    int one = 0, zero = 0, two = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero++;
        else if (arr[i] == 1)
            one++;
        else
            two++;
    }
    int i = 0;
    // Arrange Zero
    while (zero--)
    {
        arr[i] = 0;
        i++;
    }
    // Arrange one
    while (one--)
    {
        arr[i] = 1;
        i++;
    }
    // Arrange Zero
    while (two--)
    {
        arr[i] = 2;
        i++;
    }
    return 0;
}

// Palindrome
bool checkPalindrome(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}

// Kadane's Algorithm:-
int getMaxSubarraySum(int arr[], int n)
{
    int ans = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        // include current element
        sum = sum + arr[i];

        // update the ans
        ans = max(ans, sum);

        // if max ending here is 0, then don't include
        if (sum < 0)
            sum = 0;
    }
    return ans;
}

// Move all -ve no: to one side of array

void MoveNegative(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    // int arr[] = {3,5,7,6,9,2};
    // reverseArray(arr, 6);
    // cout<<"Maximum value is: "<<getMaxFromArray(arr,6)<<endl;
    // cout<<"Minmum value is: "<<getMinFromArray(arr,6)<<endl;
    // SwapAlternates(arr,6);
    // int arr[] = {0,1,2,1,0,2};
    // cout<<sortZeroOneTwo(arr,6);
    // int arr[] = {1,2,3,3,2,1};
    // cout<<"Palindrome or not: "<<checkPalindrome(arr,6)<<endl;
    // cout<<"Max Subarray sum is "<<getMaxSubarraySum(arr,6)<<endl;
    // cout<<"Reverse of array: ";
    // for(int i=0; i<6; i++)
    //{
    //     cout<<arr[i] <<" ";
    // }

    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    cout << "Move negative no.: " << endl;
    MoveNegative(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}