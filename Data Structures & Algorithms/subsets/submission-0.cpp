class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> current;
        vector<vector<int>> storebig;
        sequences(0,nums ,current , storebig , n);
        return storebig;
    }
    void sequences(int index , vector <int> &nums ,vector <int> &current, vector<vector<int>> &storebig , int n ){
        if(index >= n){
            storebig.push_back(current);
            return ;

        }
        current.push_back(nums[index]);
        sequences(index + 1, nums ,current, storebig , n);
        current.pop_back();
        sequences(index + 1, nums ,current, storebig , n);
    }
};
