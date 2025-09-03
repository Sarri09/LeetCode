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
    int getMinimumDifference(TreeNode* root) {
        if (!root) return 0;
        int mindiff = INT_MAX;
        // hay que guardar un nodo previo, esto se puede hacer, es algo muy tipico de los arboles
        TreeNode* prev = nullptr; // este es el nuevo, para guardar el prev

        calculateMinDiff(root,prev,mindiff);  // mandamos el root, el prev y la diferencia

        return mindiff;
    }

    void calculateMinDiff(TreeNode* root, TreeNode*& prev, int& mindiff) { // paso por referencia y puntero
        if (!root) return;  // cortamos si llegamos a un valor nulo

        //resursion para irnos al fondo del BFS

        calculateMinDiff(root->left,prev,mindiff);

        // si no estamos en el root comparamos el prev y el root

        if (prev) {
            mindiff = min(mindiff, root->val - prev->val);
        }

        // y seteamos el prev como el nuevo root

        prev = root;

        calculateMinDiff(root->right /*recuerda que un BFS tiene el nodo mas grande a la derecha*/,prev,mindiff);
    }   
};