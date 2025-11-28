class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* tail = head;
        int n = 1;
        if(head == NULL || head->next == NULL || k==0){
            return head;
        }
        while(tail->next!=NULL){
            n++;
            tail = tail->next;
        }
        k = k%n;
        if(k==0){
            return head;
        }
        tail->next = head;
        ListNode* temp = head;
        for(int i=1;i<n-k;i++){
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};
