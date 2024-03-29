#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *getNode(int num)
{
    struct ListNode *nn = (struct ListNode *)malloc(sizeof(struct ListNode));
    nn->val = num;
    nn->next = NULL;
    return nn;
}

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    if (list1 == NULL)
    {
        return list2;
    }

    if (list2 == NULL)
    {
        return list1;
    }

    struct ListNode *temp2 = list2;
    struct ListNode *prev = NULL;
    struct ListNode *temp1;
    while (temp2 != NULL)
    {
        temp1 = list1;
        struct ListNode *nn = getNode(temp2->val);
        while (temp1 != NULL && temp2->val >= temp1->val)
        {
            prev = temp1;
            temp1 = temp1->next;
        }
        if (list1->next == NULL && list2->val < temp2->val)
        {
            list1->next = nn;
        }
        else if (list1->val > temp2->val)
        {
            nn->next = list1;
            list1 = nn;
        }
        else
        {
            nn->next = prev->next;
            prev->next = nn;
        }
        temp2 = temp2->next;
    }
    return list1;
}