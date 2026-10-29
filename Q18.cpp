//  Reverse Sub-segment 
#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void subReverse(vector<int> & arr,int start,int end){
    int i = start;
    int j = end;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}

void display(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr1{10,20,30,40,50,60};
    subReverse(arr1,1,4);
    display(arr1);

    vector<int> arr2{1,2,3,4};
    subReverse(arr2,0,3);
    display(arr2);

    vector<int> arr3{7};
    subReverse(arr3,0,0);
    display(arr3);

    vector<int> arr4{1,2,3,4,5};
    subReverse(arr4,2,4);
    display(arr4);

    vector<int> arr5{1,2,3,4,5};
    subReverse(arr5,0,2);
    display(arr5);
}