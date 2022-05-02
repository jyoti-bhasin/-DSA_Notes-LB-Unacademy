#include<iostream>
using namespace std;
int main()
{
    char ch=65;
    int i,j,k;
    for(i=1; i<=5; i++)
    {   
        for(j=1; j<=i; j++)
            cout<<ch++<<" ";
            ch--;

        for(k=1;k<i;k++)
        cout<<--ch<<" ";

       cout<<endl;  
    }
    return 0;
}