//Reverse and Double an Integer

#include<bits/stdc++.h>
using namespace std;

int reverse_and_double(int n){
    bool negative = false;
    if(n<0){
        negative = true;
        n = abs(n);
    }
    int rev = 0;
    while(n>0){
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(negative){
        rev = -rev;
    }
    return 2*rev;
}

int main(){
    int num1 = 123;
    int num2 = -45;
    int num3 = 0;
    int num4 = 1200;
    int num5 = 9;
    cout<<reverse_and_double(num2)<<endl;
}
