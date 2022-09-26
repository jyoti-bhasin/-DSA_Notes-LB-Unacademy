// Used long long int coz of ineger overflow

#include<iostream>
using namespace std;

long long int sqrtInt(int n){
    int s = 0;
    int e = n;
    long long int ans = 0;

    while (s<=e){
        long long int mid = s+(e-s)/2;
        
        if(mid*mid == n)
            return mid;
        
        else if(mid*mid > n)
            e = mid-1;

        else{
            ans = mid;
            s = mid+1;
        }
    }
    
    return ans;
}

double morePrecision(int n, int precision, int intSol){
    double factor = 1;
    double ans = intSol;

    for(int i=0; i<precision; i++){
        factor /= 10;

        for(double j=0; j*j<n; j += factor){
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n = 37;
    int intSol = sqrtInt(n);
    cout << intSol << endl;

    cout << morePrecision(n, 3, intSol) << endl;
    return 0;
}