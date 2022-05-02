#include<iostream>
using namespace std;

//Searching
bool search(int arr[3][3], int target, int row, int col){
    for(int i=0; i<row; i++)
        //for each row
        {
            for(int j=0; j<col; j++)
            {
                if(arr[i][j]==target)
                {
                    return true;
                }
            }
        }
        return false;
}

//Row wise sum
void rowSum(int arr2[3][3], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        int sum=0;
        //for each row
        for(int j=0; j<col; j++)
        {
            sum = sum + arr2[i][j];
            
        }
        cout<<sum<<" ";
        cout<<endl;
    }
}

//Column wise sum
void colSum(int arr2[3][3], int row, int col)
{
    for(int i=0; i<col; i++)
    {
        int sum=0;
        //for each row
        for(int j=0; j<row; j++)
        {
            sum = sum + arr2[j][i];
        }
        cout<<sum<<" ";
        cout<<endl;
    }
}

//Max Row wise
int rowMax(int arr2[3][3], int row, int col)
{
    int maxi = INT_MIN;
    for(int i=0; i<row; i++)
    {
        int sum=0;
        //for each row
        for(int j=0; j<col; j++)
        {
            sum = sum + arr2[i][j];   
        }
        maxi = max(maxi, sum);
    }
    return maxi;
    cout<<endl;
}

//Max column wise
int colMax(int arr2[3][3], int row, int col)
{
    int maxi = INT_MIN;
    for(int i=0; i<col; i++)
    {
        int sum=0;
        //for each row
        for(int j=0; j<row; j++)
        {
            sum = sum + arr2[j][i]; 
        }
        maxi = max(maxi, sum);
    }
    return maxi;
    cout<<endl;
}

//transpose 
void transpose(int arr2[3][3], int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0;j<i; j++)
        {
           swap(arr2[i][j], arr2[j][i]);
        }
    }
}

//Reverse for rotate transpose matrix
void reverseCol(int arr[3][3], int m , int n)
{
    for(int i=0; i<m; i++)
    {
    int start=0;
    int end= n-1;

    while(start<end)
    {
        swap(arr[i][start], arr[i][end]);
        start++;
        end--;
    }
}
}

//for print matrix
void printArray(int arr2[3][3],int n)
{
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            cout<<" "<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    //creation
    int arr[3][3];

    //initialse with 0
    int arr1[3][3]={0};
    //initialise first element with 1 and rest 0
    int arr2[3][3]= {1,2,3,4,5,6,7,8,9};
    //initialsing 2-D array
    int arr3[3][3]= {{1,2}, {2,3}, {3,5}};
    int n=3;

    //Input
    /*
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    */


/*
    //Print matrix
    for(int i=0; i<n; i++)
    {
        //for each row 
        for(int j=0; j<n; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    

    // Print column wise sum
    int sum=0;
    for(int i=0; i<n; i++)
    {
        //for each row
        for(int j=0; j<n; j++)
        {
            sum = sum + arr2[i][j];
            
        }
        cout<<sum;
        sum =0;
        cout<<endl;
    }
*/
    cout<<"Row wise sum is: "<<endl;
    rowSum(arr2,3, 3);
    cout<<endl;
    cout<<"Col wise sum is: "<<endl;
    colSum(arr2,3, 3);
    cout<<endl;
    cout<<"Col max is: "<<colMax(arr2,3,3);
    cout<<endl;
    cout<<"Row max is: "<<rowMax(arr2, 3, 3);
    cout<<endl;
    cout<<"Search 9: "<<search(arr2, 9, 3, 3)<<endl;

    cout<<"Transpose Matrix is: "<<endl;
    transpose(arr2, 3,3);
    printArray(arr2 , 3);

    cout<<"Reverse kreing  "<<endl;
    reverseCol(arr2 , 3 , 3);
    printArray(arr2 , 3);
    return 0;
}