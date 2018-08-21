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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) {  return l2; } 
        if(l2 == NULL) {  return l1; }
        
         ListNode *result = NULL;
         
        if(l1->val < l2->val) {
              result = l1; l1 = l1->next;
        } else {
             result = l2; l2 = l2 -> next;
        }
        
        ListNode* q = result;    
        
        while(l1 && l2){
          if(l1->val < l2->val)   { 
              q->next = l1; l1 = l1->next;
          } else { 
              q->next = l2; l2 = l2->next; 
          }
        
          q=q->next;
    }
    
    
       if(l1)  q->next=l1;
        else    q->next=l2;
    
    return result;
   }
};