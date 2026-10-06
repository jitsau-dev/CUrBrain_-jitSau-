#include<bits/stdc++.h>
using namespace std;

int countPrimes(int num){
    if(num<=2) return 0;

    vector<bool> isPrime(num,true);
    isPrime[0] = false;
    isPrime[1] = false;

    for(int p=2;p*p<num;p++){
        if(isPrime[p]){
            for(int mult=p*p;mult<num;mult+=p){
                isPrime[mult] = false;
            }
        }
    }
    int cnt = 0;
    for(int i=2;i<num;i++){
        if(isPrime[i]){
            cnt++;
        }
    }
    return cnt;
}
int main() {

    cout << countPrimes(10)<<endl;
    cout << countPrimes(2)<<endl;
    cout << countPrimes(0)<<endl;
    cout << countPrimes(3)<<endl;
    cout << countPrimes(30)<<endl;

    return 0;
}