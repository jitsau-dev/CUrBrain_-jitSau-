#include <bits/stdc++.h>
using namespace std;

int GCD(vector<int> &arr)
{
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        ans = __gcd(ans, arr[i]);
    }
    return ans;
}
int main()
{
    vector<int> arr1 = {24, 36, 48};
    vector<int> arr2 = {33, 44, 55, 66};
    vector<int> arr3 = {17};
    vector<int> arr4 = {12, 18, 24, 30};
    vector<int> arr5 = {1, 7, 14, 28};

    cout << GCD(arr1) << endl;
    cout << GCD(arr2) << endl;
    cout << GCD(arr3) << endl;
    cout << GCD(arr4) << endl;
    cout << GCD(arr5) << endl;

    return 0;
}