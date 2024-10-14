class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> level;
            for(int i=0;i<n;i++){
                TreeNode* data = q.front();
                q.pop();
                level.push_back(data->val);
              //  q.pop();
                if(data->left!=NULL){
                    q.push(data->left);
                }
                if(data->right!=NULL){
                    q.push(data->right);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};
