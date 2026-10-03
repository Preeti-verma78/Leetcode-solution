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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *dummy = new ListNode(0);
        ListNode *pre = dummy;
        ListNode *cur = head;
        ListNode *next = NULL;
        while(cur != NULL){
            next = cur->next;

        
            while(pre->next != NULL && pre->next->val < cur->val)pre = pre->next;
            cur->next = pre->next;
            pre->next = cur;
            pre = dummy;
            
            cur = next;
        }
        return  dummy->next;


        
    }
};