/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector <int> ans;
        if(root == NULL){
            return ans;
        }
        level1(root , 0 , ans);
        return ans;
    }
    void level1(TreeNode* root , int level , vector <int> &ans){
        if(root == NULL){
            return ;
        }
        if(level== ans.size()){
            ans.push_back(root -> val);
        }
        level1(root -> right , level + 1 , ans);
        level1(root -> left , level + 1 , ans);
    }
};
