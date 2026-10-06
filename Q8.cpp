#include<bits/stdc++.h>
using namespace std;

int kthFactor(int num,int k){
    vector<int> ans;
    for(int i=1;i*i<=num;i++){
        if(num%i==0) ans.push_back(i);
        if(i != num/i) ans.push_back(num/i);
    }

    sort(ans.begin(),ans.end());

    if(k>ans.size()) return -1;

    return ans[k-1];
}

int main() {

    cout << kthFactor(12, 3) << endl;
    cout << kthFactor(1, 1) << endl;
    cout << kthFactor(12, 6) << endl;
    cout << kthFactor(12, 7) << endl;
    cout << kthFactor(35, 5) << endl;

    return 0;
}