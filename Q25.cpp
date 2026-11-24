// Temperature Calibration
//T.C-->O(n) && S.C-->O(1)
#include<bits/stdc++.h>
using namespace std;

pair<int,int> findPair(vector<int>& nums,int target){
    int n = nums.size();

    int i = 0;
    int j = n-1;

    int sum = 0;

    int minDiff = INT_MAX;

    pair<int,int> ans; // store pair

    while(i<j){
        sum = nums[i] + nums[j];

        int diff = abs(target - sum);

        if(diff < minDiff){
            minDiff = diff;
            ans = {nums[i],nums[j]};
        }
        
        if(target > sum) i++;
        else if(target < sum) j--;
        else break;
    }

    return ans;
}

void print(pair<int,int> & ans){
    cout<<"("<<ans.first<<","<<ans.second<<")"<<endl;
}

int main(){
    vector<int> temps1 = {10,22,28,29,30,40};
    pair<int,int> ans = findPair(temps1,54);
    print(ans);

    vector<int> temps2 = {1,3,5,9};
    pair<int,int> ans2 = findPair(temps2,8);
    print(ans2);

    vector<int> temps3 = {1,2};
    pair<int,int> ans3 = findPair(temps3,100);
    print(ans3);

    vector<int> temps4 = {-4,-1,2,6};
    pair<int,int> ans4 = findPair(temps4,3);
    print(ans4);

    vector<int> temps5 = {10,20,30};
    pair<int,int> ans5 = findPair(temps5,5);
    print(ans5);

    return 0;
}