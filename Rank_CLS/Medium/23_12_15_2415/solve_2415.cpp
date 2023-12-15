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
    // int VT[20000];
    // int high = 0;
    // void GetHigh(TreeNode* root){
    //     if(root == nullptr) return;
    //     high++;
    //     GetHigh(root->left);
    // }
    int count = 0;
    stack<int> st;
    queue<TreeNode*> que;
    void bfs(TreeNode* root){
        if(root == nullptr)     return;
        que.push(root);
        while(!que.empty()){
            TreeNode* f = que.front();
            que.pop();
            count++;
            if(int(log(count)/log(2)) % 2 == 1){
                f->val = st.top();
                st.pop();
            }
            if(f->left != nullptr){
                que.push(f->left);
                que.push(f->right);
                if(int(log(count)/log(2)) % 2 == 0){
                    st.push(f->left->val);
                    st.push(f->right->val);
                }
            }
        }
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        // GetHigh(root);
        bfs(root);
        return root;
    }
};