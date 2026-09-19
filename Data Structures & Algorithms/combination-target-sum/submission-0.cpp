class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector <int> current;
        vector <vector<int>> solution;
        int n = nums.size();
        sequences(0 , nums , current  , solution , target , n);
        set<vector<int>> rs1(solution.begin() , solution.end());
        vector<vector<int>> rs2(rs1.begin() , rs1.end());
        return rs2;

    }
    void sequences( int index , vector <int> &nums , vector <int> current, vector<vector<int>> &solution , int target , int n){
        if(index == nums.size() || target < 0){
            return;
        }
        if(target == 0){
                solution.push_back(current);
                 return ;
        }
        current.push_back(nums[index]);
        sequences(index + 1 , nums , current , solution , target - nums[index] , n);
        sequences( index , nums , current , solution , target - nums[index] , n);
        current.pop_back();
        sequences( index + 1  , nums ,current , solution , target , n);
    }
};
