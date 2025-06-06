class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode* tl = new ListNode(100);
        ListNode* th = new ListNode(100);
        ListNode* templo = tl;
        ListNode* temphi = th;
        while(temp!=NULL){
            if(temp->val<x){
                templo->next = temp;
                templo = templo->next;
                temp = temp->next;
            }
            else{
                temphi->next = temp;
                temphi = temphi->next;
                temp = temp->next;
            }
        }
        temphi->next = NULL;
        templo->next = th->next;
        return tl->next;        
    }
};
