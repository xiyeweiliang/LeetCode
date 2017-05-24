/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxsubDepth(struct TreeNode* root)
{
    int left;
    int right;
    if (root == NULL)
        return 0;       
    
    left = maxsubDepth(root->left) + 1;
    right = maxsubDepth(root->right) + 1;

    return left > right ? left : right;
} 

int maxDepth(struct TreeNode* root) {
    return maxsubDepth(root);
    
}
