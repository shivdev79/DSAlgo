class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int sum = 0;
        vector <int> leftans = leftmax(height);
        vector <int> rightans = rightmax(height);
        for(int i = 0 ; i < n ; i++){
            sum = sum + min(leftans[i] , rightans[i]) - height[i];
        }
        return sum;
    }
    vector <int> leftmax(vector <int> &height){
        vector <int> leftans;
        int n = height.size();
        int maxi = height[0];
        for(int i = 0 ; i < n ; i++){
            maxi = max(maxi , height[i]);
            leftans.push_back(maxi);
        }
        return leftans;
    }
    vector <int> rightmax(vector <int> &height){
        vector <int> rightans;
        int n = height.size();
        int maxi = height[n-1];
        for(int i = n - 1 ; i >= 0 ; i--){
            maxi  = max(maxi , height[i]);
            rightans.push_back(maxi);
        }
        reverse(rightans.begin() , rightans.end());
        return rightans;
    }
};
