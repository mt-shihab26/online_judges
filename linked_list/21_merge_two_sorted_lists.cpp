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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head = nullptr, *tail = nullptr;
        while (list1 != nullptr || list2 != nullptr)
        {
            ListNode *node = nullptr;
            if (list1 == nullptr)
            {
                node = new ListNode(list2->val);
                list2 = list2->next;
            }
            else if (list2 == nullptr)
            {
                node = new ListNode(list1->val);
                list1 = list1->next;
            }
            else if (list1->val < list2->val)
            {
                node = new ListNode(list1->val);
                list1 = list1->next;
            }
            else
            {
                node = new ListNode(list2->val);
                list2 = list2->next;
            }
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
// Tuesday, December 13, 2022 | 12:30:11 PM (+6)