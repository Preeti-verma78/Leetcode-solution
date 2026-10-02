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
    ListNode* partition(ListNode* head, int x) {

        ListNode* dummyLess = new ListNode(0);
        ListNode* dummyGreater = new ListNode(0);
         ListNode* less = dummyLess;
        ListNode* greater = dummyGreater;
        ListNode* temp = head;
        while(temp != NULL) {
            if(temp->val < x) {
                less->next = temp;
                less = less->next;
            }
            else {
                greater->next = temp;
                greater = greater->next;
            }

            temp = temp->next;
        }
        less->next = dummyGreater->next;
        greater->next = NULL;

        return dummyLess->next;
    }
};