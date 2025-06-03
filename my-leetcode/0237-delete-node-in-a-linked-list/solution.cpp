class Solution {
public:
    void deleteNode(ListNode* tar) {
        tar->val = tar->next->val;
        tar->next = tar->next->next;
    }
};
