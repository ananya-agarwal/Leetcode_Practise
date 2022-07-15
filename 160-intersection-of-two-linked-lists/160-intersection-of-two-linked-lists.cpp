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
  
//         if(!headA || !headB)
//             return NULL;
        
//         ListNode*t1=headA, *t2=headB;
        
//         while(t1 != t2)
//         {
//             t1 = (t1 == NULL ? headB: t1->next);
//             t2 = (t2 == NULL ? headA: t2->next);
//         }
        
//         return t1;
        
        
int getDifference(ListNode* head1,ListNode* head2) 
{
     int len1 = 0,len2 = 0;
        while(head1 != NULL || head2 != NULL)
        {
            if(head1 != NULL) 
                ++len1,head1 = head1->next;
            
            if(head2 != NULL) 
                ++len2, head2 = head2->next;
        }
        return len1-len2;
}

//utility function to check presence of intersection
ListNode *getIntersectionNode(ListNode *head1, ListNode *head2)
{
        int diff = getDifference(head1,head2);
    
        if(diff < 0) 
            while(diff++ != 0) 
                head2 = head2->next; 
    
        else 
            while(diff-- != 0) head1 = head1->next;
    
        while(head2 != NULL) 
        {
            if(head1 == head2) 
                return head1;
            
            head2 = head2->next;
            head1 = head1->next;
        }
        return head2;
}
};


//method 2:

//dono hi lists me for loop lagao and find the length of the lists and jo diff aaye list me utne se lambi vali lsit ka pointer head se aage rakhdo..ab move karo dono list ke pointers and find ki voh kaha intrct krrhe ha


          
        