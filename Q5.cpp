//Replace Even Digits with Zero

#include<bits/stdc++.h>
using namespace std;

vector<int> replaceEvenDigitWithZero(int n,vector<int>& ans){
    while(n>0){
        int digit = n%10;
        if(digit%2 == 0){
            ans.push_back(0);
        }
        else{
            ans.push_back(digit);
        }
        n = n/10;
    }
    reverse (ans.begin(),ans.end());
    return ans;
}

int main(){
    int num1 = 250;
    int num2 = 12345;
    int num3 = 2468;
    int num4 = 13579;
    int num5 = 1002;
    vector<int> ans;
    replaceEvenDigitWithZero(num4,ans);
    for(int n: ans){
        cout<<n<<" ";
    }
}