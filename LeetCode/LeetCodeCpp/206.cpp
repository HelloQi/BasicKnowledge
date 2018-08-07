#include "stdafx.h"
#include <vector>
using namespace std;

/*
��תһ����������

ʾ��:

����: 1->2->3->4->5->NULL
���: 5->4->3->2->1->NULL
����:
����Ե�����ݹ�ط�ת���������ܷ������ַ����������⣿
*/

//Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		if (head == nullptr || head->next == nullptr)
		{
			return head;
		}
		ListNode* pre = head;
		ListNode* cur = head->next;
		ListNode* r;
		head->next = nullptr;
		while (cur != nullptr)
		{
			r = cur->next;
			cur->next = pre;
			pre = cur;
			cur = r;
		}
		head = pre;
		return head;
	}
};