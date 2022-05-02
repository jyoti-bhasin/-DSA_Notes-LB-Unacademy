#include<iostream>
using namespace std;

int main()
{
        int n=5;
        int i,j;
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=i;j++)
          {
              if( j==1 || i==n || j==i)
              cout<<j<<" ";

              else
              cout<<"  ";
          }
          cout<<endl;
      }
    return 0;
}