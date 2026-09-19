class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int a = -1;
        int b = -1;
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                if(i == j){
                    continue;
                }
                if(nums[i] + nums[j] == target){
                    a = i;
                    b = j;
                }
            }
        }
        return {a,b};
    }
};
