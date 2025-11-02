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
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;

        return subTree(root->left, root->right);
    }

    bool subTree(TreeNode* leave1, TreeNode* leave2) {
        if (leave1 == nullptr && leave2 == nullptr) return true;
        if (leave1 == nullptr || leave2 == nullptr) return false;

        if (leave1->val != leave2->val) return false;

        // aqui como dar vuelta un arbol
        return subTree(leave1->left, leave2->right) && subTree(leave2->left, leave1->right);
    }
};