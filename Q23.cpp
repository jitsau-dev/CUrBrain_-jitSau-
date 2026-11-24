// Minimum Subarray Sum (Brute Force)
//T.C-->O(n^2) && S.C-->O(1);
#include<bits/stdc++.h>
using namespace std;

int minSubArraySum(vector<int> & arr){
    int n = arr.size();
    int ans = INT_MAX;

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            ans = min(ans,sum);
        }
    }
    return ans;
}

int main(){
    vector<int> arr1 = {3,-4,2,-3,5};
    cout<<minSubArraySum(arr1)<<endl;

    vector<int> arr2 = {1,2,3};
    cout<<minSubArraySum(arr2)<<endl;

    vector<int> arr3 = {-1,-2,-3};
    cout<<minSubArraySum(arr3)<<endl;

    vector<int> arr4 = {5};
    cout<<minSubArraySum(arr4)<<endl;

    vector<int> arr5 = {4,-1,-2,1,-5,3};
    cout<<minSubArraySum(arr5)<<endl;
    return 0;
}