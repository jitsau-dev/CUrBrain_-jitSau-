//Delete by Value
//T.C-->O(n) && S.C-->(1)
#include<bits/stdc++.h>
using namespace std;

void deleteByValue(vector<int>& arr,int val){
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i] == val){
            while(i < n-1){
                arr[i] = arr[i+1];
                i++;
            }
            arr.pop_back();
            break;
        }
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
    vector<int> nums1 = {10,20,30,20,40};
    vector<int> nums2 = {5,15};
    vector<int> nums3 = {7};
    vector<int> nums4 = {};
    vector<int> nums5 = {4,4,4};


    deleteByValue(nums1,20);
    print(nums1);

    deleteByValue(nums2,99);
    print(nums2);

    deleteByValue(nums3,7);
    print(nums3);

    deleteByValue(nums4,3);
    print(nums4);

    deleteByValue(nums5,4);
    print(nums5);
}