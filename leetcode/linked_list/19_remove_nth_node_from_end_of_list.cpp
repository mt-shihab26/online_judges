#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *t = head, *pre = nullptr;
        int ln = 0;
        while (t != nullptr)
        {
            ln++;
            pre = t;
            t = t->next;
        }

        if (ln == 1)
        {
            return t;
        }
        if (ln == 2)
        {
            if (n == 1)
            {
                t = new ListNode(head->val);
                delete head;
            }
            else
            {
                t = head->next;
                delete head;
            }
            return t;
        }
        if (n == ln)
        {
            t = head->next;
            delete head;
            return t;
        }

        n = ln - n - 1;
        t = head;

        cout << n << "\n";

        while (n-- && t != nullptr)
        {
            t = t->next;
        }
        if (t != nullptr && t->next != nullptr)
        {
            ListNode *nn = t->next->next;
            delete t->next;
            t->next = nn;
        }
        return head;
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Tuesday, December 13, 2022 | 12:11:16 PM (+6)