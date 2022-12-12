#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        long long int sm = 0, carray = 0, tm;
        bool is_carray = false;
        ListNode *head = nullptr, *tail = nullptr;
        while (l1 != nullptr && l2 != nullptr)
        {
            tm = carray + l1->val + l2->val;
            if (tm >= 10)
            {
                carray = tm / 10;
                tm = tm % 10;
            }
            else
                carray = 0;
            ListNode *node = new ListNode(tm);
            if (head == nullptr)
                head = node;
            else
                tail->next = node;
            tail = node;

            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != nullptr)
        {
            tm = carray + l1->val;
            if (tm >= 10)
            {
                carray = tm / 10;
                tm = tm % 10;
            }
            else
                carray = 0;
            ListNode *node = new ListNode(tm);
            if (head == nullptr)
                head = node;
            else
                tail->next = node;
            tail = node;

            l1 = l1->next;
        }
        while (l2 != nullptr)
        {
            tm = carray + l2->val;
            if (tm >= 10)
            {
                carray = tm / 10;
                tm = tm % 10;
            }
            else
                carray = 0;
            ListNode *node = new ListNode(tm);
            if (head == nullptr)
                head = node;
            else
                tail->next = node;
            tail = node;

            l2 = l2->next;
        }
        if (carray > 0)
        {
            ListNode *node = new ListNode(carray);
            if (head == nullptr)
                head = node;
            else
                tail->next = node;
            tail = node;
        }

        return head;
    }
};

int main()
{

    return 0;
};
// github.com/shh26b (Shihab Mahamud)
// Monday, December 12, 2022 | 03:31:44 PM (+6)