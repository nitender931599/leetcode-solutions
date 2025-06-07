class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* tempA = a;
        ListNode* tempB = b;
        ListNode* c = new ListNode(100);
        ListNode* tempC = c;
        while(tempA && tempB){
            if(tempA->val<tempB->val){
                tempC->next = tempA;
                tempA = tempA->next;
                tempC = tempC->next;
            }
            else{
                tempC->next = tempB;
                tempB = tempB->next;
                tempC = tempC->next;
            }
        }
        if(tempA==NULL){
            tempC->next = tempB;
        }
        else{
            tempC->next = tempA;
        }
        return c->next;

















































        // ListNode* c = new ListNode(100);
        // ListNode* temp = c;
        // while(a!=NULL && b!=NULL){
        //     if(a->val<=b->val){
        //         temp->next = a;
        //         a = a->next;
        //         temp = temp->next;
        //     }
        //     else{
        //         temp->next = b;
        //         b = b->next;
        //         temp = temp->next;
        //     }
        // }
        // if(a==NULL){
        //     temp->next = b;
        // }
        // else{
        //     temp->next = a;
        // }
        // return c->next;
    }
};
