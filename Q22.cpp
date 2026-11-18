//Merge Sorted Arrays (In-Place Variant)

// T.C --> O(M+N) && S.C --> O(1)

#include<bits/stdc++.h>
using namespace std;

void mergeArray(vector<int>& nums1, int m,vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while(i >= 0 && j >= 0) {
        if(nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        }
        else {
            nums1[k] = nums2[j];
            j--;
        }

        k--;
    }

    while(j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
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

int main() {

    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    mergeArray(nums1, 3, nums2, 3);
    print(nums1);


    vector<int> nums3 = {0};
    vector<int> nums4 = {1};

    mergeArray(nums3, 0, nums4, 1);
    print(nums3);

    vector<int> nums5 = {1};
    vector<int> nums6 = {};

    mergeArray(nums5, 1, nums6, 0);
    print(nums5);


    vector<int> nums7 = {4,5,6,0,0,0};
    vector<int> nums8 = {1,2,3};

    mergeArray(nums7, 3, nums8, 3);
    print(nums7);

    vector<int> nums9 = {1,3,5,0,0};
    vector<int> nums10 = {2,4};

    mergeArray(nums9, 3, nums10, 2);
    print(nums9);

    return 0;
}