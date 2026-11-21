class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector <int> leftstore = leftmax(height);
        vector <int> rightstore = rightmax(height);
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum = sum + min(leftstore[i] , rightstore[i]) - height[i];
        }
        return sum;
    }
    vector <int> leftmax(vector <int> &height){
        vector <int> leftans;
        int maxi = height[0];
        int n  = height.size();
        for(int i = 0 ;  i < n ; i++){
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
            maxi = max( maxi , height[i]);
            rightans.push_back(maxi);
        }
        reverse(rightans.begin() , rightans.end());
        return rightans;

    }
};
