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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* current = l3;
        int reserv = 0;

        while (l1 != nullptr || l2 != nullptr || reserv != 0) {
            int val1 = 0;
            int val2 = 0;
            if (l1 != nullptr) {
                val1 = l1->val; 
                l1 = l1->next;
            } else {
                val1 = 0;
            }

            if (l2 != nullptr) {
                val2 = l2->val;
                l2 = l2->next;
            } else {
                val2 = 0;
            }

            int sum = val1 + val2 + reserv;

            reserv = sum / 10;

            int nodevalue = sum % 10;

            current->next = new ListNode(nodevalue); 

            current = current->next;
        }

        return l3->next;
    }

    
};