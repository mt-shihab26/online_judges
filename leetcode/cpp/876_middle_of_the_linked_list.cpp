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
    ListNode *middleNode(ListNode *head)
    {
        int x = 0;
        ListNode *h = head;
        while (h != nullptr)
        {
            x++;
            h = h->next;
        }
        x = x / 2;
        h = head;
        while (x--)
            h = h->next;
        return h;
    }
};

int main()
{

    return 0;
};
// github.com/p-nerd (Shihab Mahamud)
// Wednesday, December 14, 2022 | 04:39:17 PM (+6)