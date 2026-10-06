//Palindrome or Sum with Reverse
#include<bits/stdc++.h>
using namespace std;
int isPalindrome(int n){
    int num = n;
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
    if(num == rev) return num;
    else return num + rev;
}
int main(){
    int num1 = 121;
    int num2 = 123;
    int num3 = 0;
    int num4 = -45;
    int num5 = 120;
    cout<<isPalindrome(num4);
}