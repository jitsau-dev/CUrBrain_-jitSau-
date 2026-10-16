// Large Array Sum Modulo

#include<bits/stdc++.h>
using namespace std;

//T.C-->O(N) && S.C-->O(1)

long long sumModulo(const vector<long long>&arr){
    const long long MOD = 1000000007LL;
    long long result = 0;
    for(long long val:arr){
        result = (result + (val%MOD))%MOD;
    }
    return result;
}

int main(){
    vector<long long> arr = {1000000000, 1000000000, 1000000000};

    cout<<sumModulo(arr)<<endl;

    return 0;
}