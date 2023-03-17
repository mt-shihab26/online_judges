#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
};

class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        ListNode *h = head;
        int ln = -1;
        while (h != nullptr)
        {
            ln++;
            h = h->next;
        }
        h = head;
        int sm = 0;
        while (h != nullptr)
        {
            sm = sm + (h->val * (1 << ln));
            ln--;
            h = h->next;
        }
        return sm;
    }
};

int main()
{

    return 0;
};
// github.com/shh26b (Shihab Mahamud)
// Wednesday, December 14, 2022 | 04:14:47 PM (+06)
