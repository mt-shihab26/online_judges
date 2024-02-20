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
    ListNode *mergeNodes(ListNode *head)
    {
        int sm = 0;
        ListNode *head2 = nullptr;
        ListNode *tail = nullptr;
        if (head != nullptr)
        {
            head = head->next;
        }
        while (head != nullptr)
        {
            if (head->val == 0)
            {
                ListNode *node = new ListNode(sm);
                sm = 0;
                if (head2 == nullptr)
                {
                    head2 = node;
                    tail = node;
                }
                else
                {
                    tail->next = node;
                    tail = node;
                }
            }
            else
            {
                sm += head->val;
            }
            head = head->next;
        }
        return head2;
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Monday, December 12, 2022 | 02:35:30 PM (+6)