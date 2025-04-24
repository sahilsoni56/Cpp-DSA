/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isEqual(TreeNode* subnode, TreeNode* subRoot) {
        if (subnode == NULL && subRoot == NULL) {
            return true;
        } else if (subnode == NULL || subRoot == NULL) {
            return false;
        } else if (subnode->val != subRoot->val) {
            return false;
        }
        return isEqual(subnode->left, subRoot->left) &&
               isEqual(subnode->right, subRoot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL)
            return false;
        if (isEqual(root, subRoot)) {
            return true;
        }
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};