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
    ListNode* middleNode(ListNode* head) {
        ListNode* result = NULL;
        ListNode* p;
        int count=0, ticker=0;
        p = head;
        int midValue;
        
        if(head == NULL) return 0;
        
        while(head != NULL)
        {
            count++;
            head = head->next;
        }
        
        midValue = (count/2);
        while(p != NULL) {
            if(ticker == midValue){
                result = p; 
                break;
            }
            ticker++;
            p = p->next;
        }
        return result;
    }
};