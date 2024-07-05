class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *current = dummy;

        ListNode *temp = head->next;
        int sum = 0;

        while (temp != NULL)
        {
            if (temp->val == 0)
            {
                current->next = new ListNode(sum);
                current = current->next;
                sum = 0;
            }
            else
            {
                sum += temp->val;
            }
            temp = temp->next;
        }

        return dummy->next;
    }
};