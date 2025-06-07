class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        int count = 0;
        ListNode* a = new ListNode(100);
        ListNode* b = new ListNode(234);
        ListNode* tempa = a;
        ListNode* tempb = b;
        ListNode* temp = head;
        while(temp!=NULL){
            count++;
            if(count%2!=0){
                tempa->next = temp;
                tempa = tempa->next;
                temp = temp->next;
            }
            else{
                tempb->next = temp;
                tempb = tempb->next;
                temp = temp->next;
            }
        }
        tempb->next = NULL;
        tempa->next = b->next;
       // tempb->next = NULL;
        return a->next;
    }



































    //     int count = 0;
    //     ListNode* temp = head;
    //     ListNode* odd = new ListNode(100);
    //     ListNode* even = new ListNode(100);
    //     ListNode* temp1 = odd;
    //     ListNode* temp2 = even;
    //     while(temp!=NULL){
    //         count++;
    //         if(count%2!=0){
    //             temp1->next = temp;
    //             temp = temp->next;
    //             temp1 = temp1->next;
    //         }
    //         else{
    //             temp2->next = temp;
    //             temp = temp->next;
    //             temp2 = temp2->next;
    //         }
    //     }
    //     temp2->next = NULL;
    //     temp1->next = even->next;
    //     return odd->next;
    // }
};
