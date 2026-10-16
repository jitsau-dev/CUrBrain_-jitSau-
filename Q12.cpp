// Modulo Power

// T.C--> O(power) && S.C-->O(1)
#include<bits/stdc++.h>
using namespace std;

long long powerModulo(long long base,long long power,long long mod){
    if(mod<=0 || power<0){
        cout<<"mod must be positive and power non-negative"<<endl;
    }

    long long ans = 1%mod;
    base %= mod;

    for(long long i=0;i<power;++i){
        ans = (ans*base)%mod;
    }
    return ans;
}

int main(){
    cout<<powerModulo(2,10,1000)<<endl;
    return 0;
}