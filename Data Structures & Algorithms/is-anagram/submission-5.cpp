class Solution {
public:
    bool isAnagram(string s, string t) {
        map <int , int> mpp1;
        map <int ,int> mpp2;
        for(auto it : s){
            mpp1[it]++;
        }
        for(auto it : t){
            mpp2[it]++;
        }
        return mpp1 == mpp2;
    }
};
