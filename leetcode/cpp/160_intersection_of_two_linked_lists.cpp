#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL)
    {
    }
};

class Solution
{
  public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *tmp_a = headA;
        ListNode *tmp_b = headB;

        while (tmp_a != nullptr)
        {
            while (tmp_b != nullptr)
            {
                // cout << tmp_a << " " << tmp_b << "\n";
                if (tmp_a == tmp_b)
                {
                    return tmp_a;
                }
                tmp_b = tmp_b->next;
            }
            tmp_a = tmp_a->next;
            tmp_b = headB;
        }
        // cout << "here" << "\n";
        return nullptr;
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Friday, November 03, 2023 | 03:52:22 PM (+6)
