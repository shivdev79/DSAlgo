class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); // sort to handle duplicates
        vector<int> current;
        vector<vector<int>> storebig;
        int n = nums.size();
        sequences(0, nums, current, storebig, n, target);
        return storebig;
    }

    void sequences(int index, vector<int>& nums, vector<int>& current,
                   vector<vector<int>>& storebig, int n, int target) {
        if (target == 0) { // found a valid combination
            storebig.push_back(current);
            return;
        }
        if (index >= n || target < 0) { // stop
            return;
        }

        // INCLUDE current element
        current.push_back(nums[index]);
        sequences(index + 1, nums, current, storebig, n, target - nums[index]);
        current.pop_back();

        // EXCLUDE current element (skip duplicates)
        int next = index + 1;
        while (next < n && nums[next] == nums[index]) next++;
        sequences(next, nums, current, storebig, n, target);
    }
};
