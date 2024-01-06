/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        st.push(head);
        ListNode* tmp = head->next;
        while(tmp){
            while(!st.empty() && tmp->val > st.top()->val){
                st.pop();
            }
            if(st.empty())  head = tmp;
            else st.top()->next = tmp;
            st.push(tmp);
            tmp = tmp->next;   
        }
        return head;
    }
};