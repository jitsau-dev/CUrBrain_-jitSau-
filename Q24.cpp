// Shortest Subarray with Target Sum or Greater (Brute Force)
//T.C-->O(n^2) && S.C-->O(1);
#include<bits/stdc++.h>
using namespace std;

int minSubArray(vector<int> & arr,int target){
    int n = arr.size();

    int ans = INT_MAX;

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(sum >= target){
                ans = min(ans,j-i+1);
                break;
            }
        }
    }
    return ans == INT_MAX ? 0 : ans;
}

int main(){
    vector<int> arr1 = {2, 3, 1, 2, 4, 3};
    cout<<minSubArray(arr1,7)<<endl;

    vector<int> arr2 = {1,1,1};
    cout<<minSubArray(arr2,10)<<endl;

    vector<int> arr3 = {5};
    cout<<minSubArray(arr3,5)<<endl;

    vector<int> arr4 = {1,2,3,4,5};
    cout<<minSubArray(arr4,11)<<endl;

    vector<int> arr5 = {};
    cout<<minSubArray(arr5,3)<<endl;

    return 0;
}