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
    vector<int>res;
    void sumnumbers(TreeNode* root,long int sum)
    {
        if(root->left==NULL && root->right==NULL)
        {
            sum=sum*10+root->val;
            res.push_back(sum);
        }
        sum=sum*10+root->val;
        if(root->left)
        {
            sumnumbers(root->left,sum);
        }
         if(root->right)
        {
            sumnumbers(root->right,sum);
        }
    }
    int sumNumbers(TreeNode* root) {
       long int sum=0;
         sumnumbers(root,sum);
        return accumulate(res.begin(),res.end(),0);
    }
};
