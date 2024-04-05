
#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

int gcd(int a, int b)
{
    if (a > b)
    {
        return (a % b == 0) ? b : gcd(b, a % b);
    }
    return (b % a == 0) ? a : gcd(a, b % a);
}
struct ListNode *getNode(int num)
{
    struct ListNode *nn = (struct ListNode *)malloc(sizeof(struct ListNode));
    nn->val = num;
    nn->next = NULL;
    return nn;
}
struct ListNode *insertGreatestCommonDivisors(struct ListNode *head)
{
    struct ListNode *temp = head;
    struct ListNode *prev;
    struct ListNode *nn;
    int res;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
        res = gcd(prev->val, temp->val);
        nn = getNode(res);
        nn->next = prev->next;
        prev->next = nn;
    }
    return head;
}