#include<iostream>
using namespace std;

int main()
{
    int n=6;
    int row,col;

    for(row =1; row<=n; row++)
    {
        for(col=row; col<n; col++)
        {
            cout<<" ";

        }
        for(col=1; col<=2*row-1; col++)
        {
            if(col==1 || col==2*row-1 || row==n)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }    
                if(row==n)
                {
                    if(col== row +2)
                    {
                        cout<<"*";
                    }
                }
        cout<<endl;
    }
    return 0;
}