class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        set <int> s1;
        for(int i = 0 ; i < n ; i++ ){
            for(int j = i +1 ; j < n ; j++){
                if(nums[i]+nums[j]==target){
                    s1.insert({i,j});
                }
            }
        }
        vector <int> ans(s1.begin(), s1.end());
        return ans;
    }
};
