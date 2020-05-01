#ifndef LLSOLUTION_H
#define LLSOLUTION_H

#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class LLSolution
{
public:
    LLSolution();
    static ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
    static void printLinkedList(const ListNode *head);

};

#endif // LLSOLUTION_H
