#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *middleNode(struct ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct ListNode *temp = head;
    struct ListNode *prev = head;
    while (temp->next != NULL && temp->next->next != NULL)
    {
        prev = prev->next;
        temp = temp->next->next;
    }
    if (temp->next != NULL)
    {
        return prev->next;
    }
    else
    {
        return prev;
    }
}