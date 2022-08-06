class Solution {
public:
    int ans=-1,count=1;
    int kthSmallest(TreeNode* root, int k) {
    if(root==NULL)return 0;
        kthSmallest(root->left,k);
            if(count==k){
                ans=root->val;
            }
        count++;
        kthSmallest(root->right,k);
            return ans;
    }
};
