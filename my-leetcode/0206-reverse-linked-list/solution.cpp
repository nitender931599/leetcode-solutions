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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL;
        ListNode *temp = head;
        ListNode *forw = NULL;

        if(head == NULL)
        {
            return head;
        }
        else
        {
             while(temp!=NULL)
        {
            forw = temp->next;
            temp->next = prev;
            prev = temp;
            temp = forw;
        }
        
    }
    return prev;
     } 
};
