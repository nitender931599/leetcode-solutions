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
    ListNode* oddEvenList(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        ListNode* odd = new ListNode(100);
        ListNode* even = new ListNode(100);
        ListNode* temp1 = odd;
        ListNode* temp2 = even;
        while(temp!=NULL){
            count++;
            if(count%2!=0){
                temp1->next = temp;
                temp = temp->next;
                temp1 = temp1->next;
            }
            else{
                temp2->next = temp;
                temp = temp->next;
                temp2 = temp2->next;
            }
        }
        temp2->next = NULL;
        temp1->next = even->next;
        return odd->next;
    }
};
