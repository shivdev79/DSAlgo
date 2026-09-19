class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector <int> current;
        vector<vector<int>> storebig;
        sequences(0,nums, current , storebig , n);
        set<vector<int>> rs1(storebig.begin() , storebig.end());
        vector<vector<int>> ans(rs1.begin() , rs1.end());
        return ans;

    }
    void sequences(int index , vector <int> &nums ,vector <int> &current ,  vector<vector<int>> &storebig , int n){
        if(index >= n){
            storebig.push_back(current);
            return ;
        }
        current.push_back(nums[index]);
        sequences(index + 1, nums , current , storebig , n);
        current.pop_back();
        sequences(index + 1, nums , current , storebig , n);

    }
};
