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
    int gcd(int a, int b){
        return b == 0 ? a : gcd(b, a%b);
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* tmp = head;
        while(tmp){
            if(tmp->next == NULL)   break;
            int b = tmp->next->val;
            int a = tmp->val;
            ListNode* in = (ListNode*)malloc(sizeof(ListNode));
            in->next = tmp->next;
            in->val = gcd(a, b);
            tmp->next = in;
            tmp = in->next;
        }
        return head;
    }
};