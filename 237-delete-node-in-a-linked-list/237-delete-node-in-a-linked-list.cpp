/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) 
    {
              //we will just copy the value of node first..i.e 1->2->3->4->5  ..say deleted node is 3,then new        //node becomes 1->2->4->4->5 now just change the address of nodes and them.. 1->2->4->5
        
       node->val = node->next->val;
       node->next = node->next->next;
    }
};
