class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int x1 = count1(nums , goal);
        int y1 = count1(nums , goal - 1);
        int ans = x1 - y1;
        return ans;
    }
    int count1(vector <int>& nums , int goal){
        if(goal < 0){
            return 0;
        }
        int l = 0 ;
        int r = 0 ;
        int cnt  = 0;
        int sum = 0 ;
        int n = nums.size();
        while( r < n ){
            sum = sum + nums[r];
            if(sum > goal){
                while(sum > goal){
                    sum = sum - nums[l];
                    l = l + 1;
                }
            }
            cnt = cnt + ( r - l + 1);
            
            r = r + 1 ;

        }
        return cnt;
    }
};











