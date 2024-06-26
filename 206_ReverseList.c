#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *reverseList(struct ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    struct ListNode *newnode = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newnode;
}