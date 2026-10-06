#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num<2) return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0) return false;
    }
    return true;
}

int nextPrimeNumber(int num){
    int next = num+1;
    while(!isPrime(next)){
        next++;
    }
    return next;
}

int main(){
    cout<<nextPrimeNumber(14)<<endl;
    cout<<nextPrimeNumber(0)<<endl;
    cout<<nextPrimeNumber(1)<<endl;
    cout<<nextPrimeNumber(2)<<endl;
    cout<<nextPrimeNumber(17)<<endl;
    return 0;
}