//Subtract the Product and Sum of Digits

#include<bits/stdc++.h>
using namespace std;
int subProductAndSum(int n){
    int sum = 0;
    int product = 1;
    while(n>0){
        int rem = n%10;
        sum += rem;
        product *= rem;
        n = n/10;
    }
    return (product-sum);
}

int main(){
    int num1 = 234;
    int num2 = 123;
    int num3 = 5;
    int num4 = 100;
    int num5 = 999;
    cout<<subProductAndSum(num5)<<endl;
}