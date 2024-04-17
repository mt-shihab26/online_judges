#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr)
    {
    }
    ListNode(int x) : val(x), next(nullptr)
    {
    }
    ListNode(int x, ListNode *next) : val(x), next(next)
    {
    }
};

class Solution
{
  public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *p = head;
        while (p != nullptr)
        {
            ListNode *d = p->next;
            while (d != nullptr && p->val == d->val)
            {
                d = d->next;
            }
            p->next = d;
            p = d;
        }
        return head;
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Wednesday, April 17, 2024 | 05:31:52 PM (+6)
