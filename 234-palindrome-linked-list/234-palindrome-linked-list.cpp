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
   
    ListNode* reverse(ListNode* ptr)
    {
    ListNode* pre=NULL;
    ListNode* nex=NULL;
    while(ptr!=NULL) 
    {
        nex = ptr->next;
        ptr->next = pre;
        pre=ptr;
        ptr=nex;
    }
    return pre;
}

    
bool isPalindrome(ListNode* head) 
{
    if(head==NULL||head->next==NULL) 
        return true;
        
     ListNode* slow = head;
     ListNode* fast = head;
        
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
        
    slow->next = reverse(slow->next);
    slow = slow->next;
    ListNode* dummy = head;
        
    while(slow!=NULL)
    {
        if(dummy->val != slow->val)
            return false;
        
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
}
};
//method1: saari value ko array me daaldo and then loop lagake array ke half tak chck krlo for palindrome
//method2: phle half tak loop chalao and mid vale pr slow pointr rkdo then second hlf ko reverse krdo. strt hlf pr ab loop lagake
//compre the first hlf and second half thus O(n/2) + O(n/2) + O(n/2)