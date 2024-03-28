#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *getnode(struct ListNode *head, int n)
{
    struct ListNode *nn = (struct Listnode *)malloc(sizeof(struct ListNode));
    nn->val = n;
    nn->next = NULL;
    if (head == NULL)
    {
        return nn;
    }
    struct ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = nn;
    return head;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    int sum = 0, carry = 0, n1 = 0, n2 = 0;
    struct ListNode *res = NULL;
    while (l1 != NULL || l2 != NULL)
    {
        if (l1)
        {
            n1 = l1->val;
        }
        if (l2)
        {
            n2 = l2->val;
        }
        sum = n1 + n2 + carry;
        if (carry == 1)
        {
            carry = 0;
        }
        if (sum > 9)
        {
            carry = 1;
            sum %= 10;
        }
        res = getnode(res, sum);
        n1 = n2 = sum = 0;
        if (l1 != NULL)
        {
            l1 = l1->next;
        }
        if (l2 != NULL)
        {
            l2 = l2->next;
        }
    }
    if (carry == 1)
    {
        res = getnode(res, 1);
    }
    return res;
}