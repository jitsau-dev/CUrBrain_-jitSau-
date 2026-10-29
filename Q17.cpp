//Most Popular Item

#include<bits/stdc++.h>
using namespace std;

int mostPopularItem(vector<int>& arr){
    unordered_map<int,int> freq;

    for(int num : arr){
        freq[num]++;
    }

    int ans = arr[0];
    int maxFreq = 0;

    for(const auto& num : freq){
        int ele = num.first;
        int count = num.second;

        if(count>maxFreq || (count==maxFreq && ele<ans)){
            maxFreq = count;
            ans = ele;
        }
    }

    return ans;
}

int main(){
    vector<int> arr1{101,103,101,102,103,105,101,103};
    vector<int> arr2{5,5,5,2,2,2,2};
    vector<int> arr3{99};
    vector<int> arr4{-2,-2,3,3,0};
    vector<int> arr5{4,1,4,1,7};

    cout<<mostPopularItem(arr1)<<endl;
    cout<<mostPopularItem(arr2)<<endl;
    cout<<mostPopularItem(arr3)<<endl;
    cout<<mostPopularItem(arr4)<<endl;
    cout<<mostPopularItem(arr5)<<endl;
}