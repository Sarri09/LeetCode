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
    int countNodes(TreeNode* root) {
        if (!root) return 0;

        int leftHeight = getHeight(root, true);
        int rightHeight = getHeight(root, false);

        if (leftHeight == rightHeight) {
            return pow(2,leftHeight) - 1; // cuando el arbol es total, la formula es 2^altura - 1 
        } 
        return 1 /*suma uno cada vez que encuentra un nodo*/ + countNodes(root->left) + countNodes(root->right);
    }               // Formula general para contar nodos

    int getHeight(TreeNode* root, bool isLeft) {
        int height = 0;

        while (root) { // mientras no sea nullptr
             height++;
             root = isLeft ? root->left : root->right;
        }

        return height;
    }
};