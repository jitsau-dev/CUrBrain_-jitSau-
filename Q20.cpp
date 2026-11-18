//Running Suffix Sum In-Place

//T.C-->O(n) && S.C-->O(1)
#include<bits/stdc++.h>
using namespace std;

void suffixSum(vector<int> & nums){
    int n = nums.size();

    int sum = 0;

    for(int i=n-1;i>=0;i--){
        int temp = nums[i];

        nums[i] = sum;

        sum += temp;
    }
}

void print(vector<int> &arr){
    cout<<"[";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];

        if(i != arr.size()-1){
            cout<<",";
        }
    }
    cout<<"]"<<endl;
}

int main(){
    vector<int> nums1 = {10,4,8,3};
    vector<int> nums2 = {5};
    vector<int> nums3 = {};
    vector<int> nums4 = {-2,5,-1};
    vector<int> nums5 = {1,2,3,4};


    suffixSum(nums1);
    print(nums1);

    suffixSum(nums2);
    print(nums2);

    suffixSum(nums3);
    print(nums3);

    suffixSum(nums4);
    print(nums4);

    suffixSum(nums5);
    print(nums5);

    return 0;
}