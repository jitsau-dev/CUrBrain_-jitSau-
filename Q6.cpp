//Digit Frequency Difference

#include<bits/stdc++.h>
using namespace std;

int digitFreqDiff(int num,int a,int b){
    if (num==0) return 1;
    int cnt1 = 0;
    int cnt2 = 0;
    while(num>0){
        int rem = num%10;
        if(rem == a) cnt1 += 1;
        if(rem == b) cnt2 += 1;
        num = num/10;
    }
    return abs(cnt1-cnt2);
}
int main(){
    cout<<digitFreqDiff(112231, 1, 2)<<endl;
    cout<<digitFreqDiff(55555, 5, 2)<<endl;
    cout<<digitFreqDiff(123456, 3, 6)<<endl;
    cout<<digitFreqDiff(0, 0, 5)<<endl;
    cout<<digitFreqDiff(1002001, 0, 1)<<endl;
}