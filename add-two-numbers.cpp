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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* i = l1;
        ListNode* j = l2;
        ListNode* res = new ListNode(0);
        ListNode* temp = res;
        int c = 0;
        while (i || j || c > 0)
        {
            if (i)
                c += i->val, i = i->next;
            if (j)
                c += j->val, j = j->next;
            temp->next = new ListNode(c % 10);
            temp = temp->next;
            c /= 10;
        }
        return res->next;
    }
};
