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
int cnt=0;

void find(TreeNode*root,vector<int>&ans){

    if(root==NULL)return;

    ans.push_back(root->val);
    find(root->left,ans);
    find(root->right,ans);
}
void solve(TreeNode* root){

    if(root==NULL)return;

    vector<int>ans;
    find(root,ans);
    // check
    if(!ans.empty()){
        int sum=accumulate(ans.begin(),ans.end(),0);
        if(sum/ans.size()==root->val){
            cnt++;
        }
    }
    solve(root->left);
    solve(root->right);
}
    int averageOfSubtree(TreeNode* root) {

        solve(root);

        return cnt;
    }
};