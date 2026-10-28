// Threshold Filter 

#include<bits/stdc++.h>
using namespace std;

vector<int> thresholdFilter(const vector<int>& values, int threshold) {
    vector<int> result;

    for (int value : values) {
        if (value >= threshold) {
            result.push_back(value);
        }
    }

    return result;
}

void printVector(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> res1 = {150, 80, 200, 90, 300};
    vector<int> res2 = {100, 50, 100};
    vector<int> res3 = {};
    vector<int> res4 = {10, 20, 30};
    vector<int> res5 = {75, 75, 75};

    vector<int> result;

    result = thresholdFilter(res1, 100);
    printVector(result);

    result = thresholdFilter(res2, 100);
    printVector(result);

    result = thresholdFilter(res3, 50);
    printVector(result);

    result = thresholdFilter(res4, 40);
    printVector(result);

    result = thresholdFilter(res5, 75);
    printVector(result);
}