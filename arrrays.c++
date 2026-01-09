#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
    vector<int> result;
    
    for (int i = 0; i < arr.size(); i++) {
        int index = abs(arr[i]) - 1;
        
        if (arr[index] < 0) {
            result.push_back(abs(arr[i]));
        } else {
            arr[index] = -arr[index];
        }
    }
    
    return result;
}find 1st and 2nd elemet smalllest 


class Solution {
public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int n = arr.size();
        
        if (n < 2) return {-1};
        
        int first = INT_MAX, second = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] < first) {
                second = first;
                first = arr[i];
            }
            else if (arr[i] > first && arr[i] < second) {
                second = arr[i];
            }
        }
        
        if (second == INT_MAX) return {-1};
        
        return {first, second};
    }
};
