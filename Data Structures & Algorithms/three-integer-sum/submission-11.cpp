class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set <vector<int>> s1;

        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1; j < n ; j++){
                for(int k = j + 1; k < n ; k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        s1.insert({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
        vector <vector<int>> ans(s1.begin(), s1.end());
        return ans;

    }
};
