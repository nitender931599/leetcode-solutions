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
        if(head == NULL || head->next==NULL){
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = NULL;
        ListNode* forw = NULL;
        ListNode* curr = slow;
        while(curr!=NULL){
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        ListNode* first = prev;
        ListNode* temp = head;
        while(first!=NULL){
            if(first->val != temp->val){
                return false;
            }
            first = first->next;
            temp = temp->next;
        }
        return true;
    }
};
