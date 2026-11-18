// Optimize Right Rotation

//T.C-->O(n) && S.C-->O(1)

#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr,int start,int end){
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void rotateArray(vector<int>& arr,int k){
    int n = arr.size();

    k = k%n;
    reverseArray(arr,0,n-1);

    reverseArray(arr,0,k-1);

    reverseArray(arr,k,n-1);
}

void print(vector<int>& arr) {
    cout << "[";

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];

        if(i != arr.size()-1)
            cout << ",";
    }

    cout << "]" << endl;
}

int main(){
    vector<int> nums1 = {1,2,3,4,5,6,7};
    vector<int> nums2 = {-1,-100,3,99};
    vector<int> nums3 = {1,2};
    vector<int> nums4 = {1};
    vector<int> nums5 = {1,2,3};


    rotateArray(nums1,3);
    print(nums1);

    rotateArray(nums2,2);
    print(nums2);

    rotateArray(nums3,5);
    print(nums3);

    rotateArray(nums4,10);
    print(nums4);

    rotateArray(nums5,0);
    print(nums5);

    return 0;
}