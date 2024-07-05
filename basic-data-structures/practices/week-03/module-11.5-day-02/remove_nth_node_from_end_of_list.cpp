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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL)
        {
            return head;
        }

        int pos = size(head) - n;

        ListNode *temp = head;

        if (pos == 0)
        {
            head = head->next;
        }
        else
        {
            for (int i = 1; i < pos; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
        }
        return head;
    }
};