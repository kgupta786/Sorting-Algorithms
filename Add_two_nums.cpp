#include <bits/stdc++.h>
using namespace std;
int main()
{
}
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{

    int carry = 0;
    ListNode *head = NULL;
    ListNode *temp = NULL;
    while (l1 != NULL and l2 != NULL)
    {
        int sumi = l1->val + l2->val + carry;
        int lefty = sumi % 10;
        carry = sumi / 10;
        ListNode *newnode = new ListNode(lefty);
        if (head == NULL)
        {

            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }

    while (l1 != NULL)
    {
        int sumi = l1->val + carry;
        int lefty = sumi % 10;
        carry = sumi / 10;
        ListNode *newnode = new ListNode(lefty);
        if (head == NULL)
        {

            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }

    while (l2 != NULL)
    {
        int sumi = l2->val + carry;
        int lefty = sumi % 10;
        carry = sumi / 10;
        ListNode *newnode = new ListNode(lefty);
        if (head == NULL)
        {

            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }

    if (carry == 1)
    {
        ListNode *newnode = new ListNode(1);
        if (head == NULL)
        {

            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }

    return head;
}