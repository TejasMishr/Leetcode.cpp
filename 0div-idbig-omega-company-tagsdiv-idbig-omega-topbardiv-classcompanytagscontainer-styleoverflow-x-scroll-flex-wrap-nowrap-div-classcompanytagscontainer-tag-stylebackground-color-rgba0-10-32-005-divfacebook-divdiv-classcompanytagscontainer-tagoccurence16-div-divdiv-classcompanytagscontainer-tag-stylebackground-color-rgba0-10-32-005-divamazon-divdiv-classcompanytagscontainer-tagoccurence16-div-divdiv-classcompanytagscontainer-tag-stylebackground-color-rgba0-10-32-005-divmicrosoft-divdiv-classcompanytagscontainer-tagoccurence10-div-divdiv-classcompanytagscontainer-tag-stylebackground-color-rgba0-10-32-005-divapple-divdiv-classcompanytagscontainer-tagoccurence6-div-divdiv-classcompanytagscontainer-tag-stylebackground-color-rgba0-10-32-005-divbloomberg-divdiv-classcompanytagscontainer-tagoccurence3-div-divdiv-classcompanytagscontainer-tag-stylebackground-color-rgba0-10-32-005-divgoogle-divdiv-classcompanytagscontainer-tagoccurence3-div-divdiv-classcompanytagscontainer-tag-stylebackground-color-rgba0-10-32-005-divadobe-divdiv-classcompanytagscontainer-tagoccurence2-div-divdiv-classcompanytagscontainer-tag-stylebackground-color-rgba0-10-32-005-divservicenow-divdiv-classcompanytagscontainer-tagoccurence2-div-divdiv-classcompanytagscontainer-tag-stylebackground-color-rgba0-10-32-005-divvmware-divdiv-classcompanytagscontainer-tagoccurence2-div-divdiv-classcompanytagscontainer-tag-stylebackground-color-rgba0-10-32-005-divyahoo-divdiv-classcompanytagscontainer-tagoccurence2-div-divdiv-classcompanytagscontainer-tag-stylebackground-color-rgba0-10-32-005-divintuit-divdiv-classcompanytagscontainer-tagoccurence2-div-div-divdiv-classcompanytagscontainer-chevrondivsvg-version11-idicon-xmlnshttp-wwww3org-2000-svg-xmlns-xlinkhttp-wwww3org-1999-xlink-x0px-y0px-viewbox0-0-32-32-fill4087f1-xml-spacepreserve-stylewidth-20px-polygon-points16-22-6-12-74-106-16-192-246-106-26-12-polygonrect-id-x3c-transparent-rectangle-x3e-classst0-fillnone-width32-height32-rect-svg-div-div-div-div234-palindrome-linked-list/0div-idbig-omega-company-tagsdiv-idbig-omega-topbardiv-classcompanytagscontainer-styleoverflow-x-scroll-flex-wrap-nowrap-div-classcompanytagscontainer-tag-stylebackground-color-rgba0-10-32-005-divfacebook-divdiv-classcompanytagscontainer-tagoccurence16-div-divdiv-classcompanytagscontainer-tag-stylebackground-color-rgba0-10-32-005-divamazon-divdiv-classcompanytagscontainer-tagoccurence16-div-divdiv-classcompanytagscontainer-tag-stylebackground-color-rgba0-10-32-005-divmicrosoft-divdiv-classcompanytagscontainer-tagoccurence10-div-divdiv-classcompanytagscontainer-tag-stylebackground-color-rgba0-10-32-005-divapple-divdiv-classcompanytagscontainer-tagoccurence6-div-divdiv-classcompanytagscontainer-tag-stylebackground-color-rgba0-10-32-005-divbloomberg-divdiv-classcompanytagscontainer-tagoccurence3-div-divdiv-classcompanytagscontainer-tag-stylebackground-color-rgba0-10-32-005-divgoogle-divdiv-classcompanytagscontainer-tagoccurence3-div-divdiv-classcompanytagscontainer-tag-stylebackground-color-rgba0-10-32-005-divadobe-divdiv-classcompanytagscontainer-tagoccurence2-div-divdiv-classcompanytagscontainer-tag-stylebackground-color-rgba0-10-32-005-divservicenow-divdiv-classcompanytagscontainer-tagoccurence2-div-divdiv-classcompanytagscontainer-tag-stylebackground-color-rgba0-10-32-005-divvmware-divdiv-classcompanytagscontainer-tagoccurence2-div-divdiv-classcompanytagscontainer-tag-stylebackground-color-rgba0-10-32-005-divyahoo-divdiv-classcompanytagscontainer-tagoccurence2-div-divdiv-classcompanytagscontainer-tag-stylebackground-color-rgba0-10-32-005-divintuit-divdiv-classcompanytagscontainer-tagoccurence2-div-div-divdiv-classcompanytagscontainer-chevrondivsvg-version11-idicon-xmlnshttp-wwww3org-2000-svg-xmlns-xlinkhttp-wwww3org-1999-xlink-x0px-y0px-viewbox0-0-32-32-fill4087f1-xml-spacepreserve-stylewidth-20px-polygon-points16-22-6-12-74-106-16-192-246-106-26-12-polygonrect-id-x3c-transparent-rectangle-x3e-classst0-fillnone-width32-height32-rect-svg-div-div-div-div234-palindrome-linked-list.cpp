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
    bool isPalindrome(ListNode* head) {
        if( head==NULL || head->next==NULL) return true;
        vector<int> mylist;
        ListNode* temp=head;
        while(temp!=NULL){
            mylist.push_back(temp->val);
            temp=temp->next;
        }
        vector<int> mylist2;
        mylist2 = mylist;
        reverse(mylist2.begin(),mylist2.end());
        return mylist2 == mylist;
    }
};