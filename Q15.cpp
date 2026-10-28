//  Minimum Absolute Value

#include<bits/stdc++.h>
using namespace std;

int minimumAbsoluteValue(const vector<int>& arr) {
    int answer = arr[0];
    long long minimum = llabs(static_cast<long long>(arr[0]));

    for (int i = 1; i < static_cast<int>(arr.size()); i++) {
        long long current =
            llabs(static_cast<long long>(arr[i]));

        if (current < minimum) {
            minimum = current;
            answer = arr[i];
        }
    }

    return answer;
}

int main() {

    vector<int> arr1 = {10, -5, -2, 4, 2};
    vector<int> arr2 = {-3, 3};
    vector<int> arr3 = {0, -1, 1};
    vector<int> arr4 = {7, -7, 4};
    vector<int> arr5 = {5, -2, 2, -1};

    cout<<minimumAbsoluteValue(arr1)<<endl;
    cout<<minimumAbsoluteValue(arr2)<<endl;
    cout<<minimumAbsoluteValue(arr3)<<endl;
    cout<<minimumAbsoluteValue(arr4)<<endl;
    cout<<minimumAbsoluteValue(arr5)<<endl;

}