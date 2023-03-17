#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *h2 = nullptr;
        while (head != nullptr)
        {
            h2 = new ListNode(head->val, h2);
            head = head->next;
        }
        return h2;
    }
};

int main()
{

    return 0;
};
// github.com/shh26b (Shihab Mahamud)
// Monday, December 12, 2022 | 01:23:06 PM (+6)