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
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});
        int maxWidth = 0;

        while (!q.empty()) {
            int currLevelSize = q.size();
            unsigned long long minIdx = q.front().second; 
            unsigned long long firstIdx = 0, lastIdx = 0;

            for (int i = 0; i < currLevelSize; i++) {
                auto [currNode, currIdx] = q.front();
                q.pop();

                unsigned long long normalizedIdx = currIdx - minIdx;

                if (i == 0) firstIdx = normalizedIdx;
                if (i == currLevelSize - 1) lastIdx = normalizedIdx;

                if (currNode->left) {
                    q.push({currNode->left, normalizedIdx * 2 + 1});
                }
                if (currNode->right) {
                    q.push({currNode->right, normalizedIdx * 2 + 2});
                }
            }
            maxWidth = max(maxWidth, static_cast<int>(lastIdx - firstIdx + 1));
        }

        return maxWidth;
    }
};