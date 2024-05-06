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
    ListNode* doIt(ListNode *head, int& b) {
        if(head == NULL) {
            return NULL;
        }
        head->next = doIt(head->next, b);
        b = max(b,head->val);
        if(head->val < b) {
            return head->next;
        }
        return head;
    }
public:
    ListNode* removeNodes(ListNode* head) {
        // ListNode *h1 = new ListNode();
        // ListNode *t = h1;
        int b = INT_MIN;
        
        return doIt(head,b);
    }
};