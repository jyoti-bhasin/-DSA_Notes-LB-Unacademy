// https://www.spoj.com/problems/PRATA/

#include<iostream>
using namespace std;

bool isPossibleSol(int rank[], int mid, int paratha, int cooks){
    int sum = 0;
    for(int i=0;i<cooks; i++){
        int time = mid;
        int count=0, k=1;
        while(time>0){
            time -= rank[i] * k;
            if(time >= 0){
                count++;
                k++;
            }
        }
        sum+= count;
    }
    if(sum>paratha)
        return true;

    return false;
}

int binary(int rank[], int paratha, int cooks){
    int s = 0;
    int e = rank[0]+(paratha*(paratha+1))/2;
    int ans = -1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(isPossibleSol(rank, mid, paratha, cooks)){
            ans = mid;
            e = mid-1;
        }
        else
            s = mid+1;
    }
    return ans;
}

int main(){
    int paratha = 10;
    int cooks = 4;
    int rank[4] = {1, 2, 3, 4};

    int minTime = binary(rank, paratha, cooks); 
    cout << "Min Time: " << minTime << endl;

    return 0;
}