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
class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *temp = head;
        int cnt = 0;
        while (temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *temp1 = head;

        for (int i = 1; i < k; i++)
        {
            temp1 = temp1->next;
        }

        ListNode *temp2 = head;
        int pos = size(head) - k;

        for (int i = 1; i <= pos; i++)
        {
            temp2 = temp2->next;
        }

        swap(temp1->val, temp2->val);

        return head;
    }
};