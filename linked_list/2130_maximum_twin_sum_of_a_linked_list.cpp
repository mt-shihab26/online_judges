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
    int pairSum(ListNode *head)
    {
        vector<int> a;
        while (head != nullptr)
        {
            a.push_back(head->val);
            head = head->next;
        }
        int mx = 0;
        for (int i = 0, j = a.size() - 1; i < j; i++, j--)
        {
            mx = max(mx, a[i] + a[j]);
        }
        return mx;
    }
};

int main()
{

    return 0;
};
// github.com/shh26b (Shihab Mahamud)
// Wednesday, December 14, 2022 | 04:50:42 PM (+6)