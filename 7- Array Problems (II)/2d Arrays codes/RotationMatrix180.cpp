#include<iostream>
using namespace std;
void transposeMatrix(int arr[2][2],int row ,int col)
{
    int n = 2;
    for(int i = 0 ; i< row ; i++ )
    {
        for(int j = 0 ; j< i ; j++)
        {
          swap(arr[i][j],arr[j][i]);
        }
    }
}
void printArray(int arr[2][2],int n)
{
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            cout<<" "<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
//Reverse for rotate transpose matrix
void ReverseCol(int arr[2][2], int m , int n)
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
int main()
{
int n=2;    
int arr[2][2] = {1,2,3,4};
transposeMatrix(arr,2,2);
printArray(arr , 2);
cout<<endl;
cout<<"Reverse kreing  "<<endl;
ReverseCol(arr , 2 , 2);
printArray(arr , 2);
cout<<endl;
transposeMatrix(arr,2,2);
printArray(arr , 2);
cout<<"Reverse kreing  "<<endl;
ReverseCol(arr , 2 , 2);
printArray(arr , 2);


return 0;
}