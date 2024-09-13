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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode *temp = head;
        while(temp!=NULL)
        {
            ListNode *node = temp->next;
            while(node!=NULL && node->val<=temp->val)
            {
                node = node->next;
            }
            if(node!=NULL)
            {
                ans.push_back(node->val);
            }
            else
            {
                ans.push_back(0);
            }
            temp = temp->next;
        }
        return ans;
    }
   
};
