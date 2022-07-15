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
    ListNode *detectCycle(ListNode *head)
    {
        unordered_map<ListNode*, int> mp;
        ListNode *h=NULL;
        
        while(head!=NULL)
        {
            mp[head]++;
            head=head->next;
            
            if(mp[head]>0)
            {
                h=head;
                break;
            }
        }
        return h;
    }
};