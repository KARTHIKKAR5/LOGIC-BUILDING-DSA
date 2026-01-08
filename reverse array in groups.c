class Solution {
public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n = arr.size();

        // If k >= array size, reverse whole array
        if (k >= n) {
            reverse(arr.begin(), arr.end());
            return;
        }

        // Reverse in groups of size k
        for (int i = 0; i < n; i += k) {
            int start = i;
            int end = min(i + k - 1, n - 1);
            reverse(arr.begin() + start, arr.begin() + end + 1);
        }
    }
};