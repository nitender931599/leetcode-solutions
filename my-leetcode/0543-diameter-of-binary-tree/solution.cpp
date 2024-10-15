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
    int bra=0;
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftht = height(root->left);
        int rightht = height(root->right);
        bra = max(bra, leftht+rightht);
        int h = max(leftht, rightht)+1;
        return h;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        height(root);
        return bra;
        // int curr = height(root->left) + height(root->right) + 1;
        // int left = diameterOfBinaryTree(root->left);
        // int right = diameterOfBinaryTree(root->right);
        // int g = max(curr, max(left, right));
        // return g;
    }
};
