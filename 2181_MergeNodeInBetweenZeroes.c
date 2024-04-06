
#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *getNode(int num)
{
    struct ListNode *nn = (struct ListNode *)malloc(sizeof(struct ListNode *));
    nn->val = num;
    nn->next = NULL;
    return nn;
}

struct ListNode *mergeNodes(struct ListNode *head)
{
    struct ListNode *prev;
    struct ListNode *current = head;
    struct ListNode *temp = current->next;
    int sum;
    while (current->next != NULL)
    {
        sum = 0;
        while (temp->val != 0)
        {
            sum += temp->val;
            temp = temp->next;
        }
        current->val = sum;
        current->next = temp;
        prev = current;
        current = current->next;
        temp = current->next;
    }
    prev->next = NULL;
    return head;
}