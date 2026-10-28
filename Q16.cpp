// Silver Medalist — Second Highest Unique Score 

#include<bits/stdc++.h>
using namespace std;


int secondHighestUnique(const vector<int>& scores) {
    int highest = 0;
    int secondHighest = 0;

    bool hasHighest = false;
    bool hasSecondHighest = false;

    for (int score : scores) {
        if (!hasHighest || score > highest) {
            if (hasHighest) {
                secondHighest = highest;
                hasSecondHighest = true;
            }

            highest = score;
            hasHighest = true;
        }
        else if (score < highest &&
                 (!hasSecondHighest || score > secondHighest)) {
            secondHighest = score;
            hasSecondHighest = true;
        }
    }

    if (!hasSecondHighest) {
        return -1;
    }

    return secondHighest;
}
int main(){

    vector<int> scores1 = {50, 40, 50, 30};
    vector<int> scores2 = {100, 100, 100};
    vector<int> scores3 = {};
    vector<int> scores4 = {10, 20, 30, 40};
    vector<int> scores5 = {5, 5, 4, 4, 3};

    cout << secondHighestUnique(scores1) << '\n';

    cout <<secondHighestUnique(scores2) << '\n';

    cout <<secondHighestUnique(scores3) << '\n';

    cout <<secondHighestUnique(scores4) << '\n';

    cout <<secondHighestUnique(scores5) << '\n';
}
