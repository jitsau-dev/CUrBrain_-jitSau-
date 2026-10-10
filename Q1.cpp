//Count Digits Without String Conversion
#include<bits/stdc++.h>
using namespace std;
bool digitCount(int n){
    if(n==0){
        return false;
    }
    if(n<0) n = abs(n);
    int count = 0;
    while(n>0){
        count++;
        n = n/10;
    }
    if(count % 2 == 0) return true;
    else return false;
}
int main(){
    int num1 = 1234;
    int num2 = 12345;
    int num3 = 0;
    int num4 = -100000;
    int num5 = -7;
    cout<<boolalpha<<digitCount(num5);
}
