// Divisible Prefix Check

//T.C--> O(N) && S.C--> O(1)

#include<bits/stdc++.h>
using namespace std;

bool isDivisiblePrefixSum(const vector<long long>&arr,long long k){
    if(k==0){
        throw invalid_argument("k must be non-zero");
    }

    if(k<0) k = -k;

    long long rem = 0;
    for(long long val:arr){
        rem = (rem + (val%k)%k)%k;
        if(rem == 0) return true;
    }
    return false;
}

int main(){
    vector<long long> arr = {4,2,9};
    long long k = 3;
    cout<<isDivisiblePrefixSum(arr,k)<<endl;
}