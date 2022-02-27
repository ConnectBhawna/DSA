/*
problem statement : https://leetcode.com/problems/maximum-width-of-binary-tree/
*/


  //Definition for a binary tree node.
  struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        queue<pair<TreeNode*, long>> q;
        q.push({root, 1});
        long ans = 0, MOD = 2147483649; //MOD = 2^31 + 1
        
        while(!q.empty()){
            int sz = q.size();
            ans = max(ans, q.back().second - q.front().second + 1);
            
            while(sz > 0){
                auto node = q.front().first;
                auto idx = q.front().second;
                q.pop();
                if(node->left != NULL) q.push({node->left, (2*idx) % MOD});
                if(node->right != NULL) q.push({node->right, (2*idx+1) % MOD});
                sz--;
            }
        }
        
        return (int)ans;
        
    }
};