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
    bool hasCycle(ListNode *head) 
    {
//         unordered_map<ListNode*,int> mp;

//         while(head)
//             //while loop useless ha kyuki actlly toh kabhi 
//             //head null hoga hi nahi, loop bas linked list traversal ke liye lagaya ha
//         {
//             mp[head]++;
            
//             head=head->next;
            
//             if(mp[head] > 0)
//                 return true;
//         }
//         return false;
        
        
        if(head==NULL || head->next == NULL)//0/1 node me no cycle
            return false;
            
        ListNode*slow=head,*fast=head;
        while(fast->next && fast->next->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow)
                return true;
        }
        return false;
    }
};

//method2: fast and slow pointer, if there is cycle, these pointrs will meet
//agar fast null hiagya means cycle exist nahi krti kyuki if there is a cycle fast pointer cant be null
//intution: agar slope ha toh deftly ek time pe fast slow se peeche hoga as in ghoomke uske piche hoga and 
//agle hi kuch steps me fast and slow will collide but agar loop nahi hua toh fast kabhi bhi slow ke 
//peeche nahi hoga