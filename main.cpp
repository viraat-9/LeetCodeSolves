// leetcodeNode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    static ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        if(l1==nullptr)
            return l2;
        if(l2==nullptr)
            return l1;

        ListNode *currentNode=nullptr,*head=nullptr;

        if(l1->val<=l2->val){
            currentNode = l1;
            l1 = l1->next;
        }
        else {
            currentNode = l2;
            l2 = l2->next;
        }

        head= currentNode;
        while (l1 && l2) {

            if(l1->val<=l2->val){
                currentNode->next = l1;
                currentNode = l1;
                l1 = l1->next;

            }
            else {
                currentNode->next = l2;
                currentNode = l2;
                l2 = l2->next;
            }


        }

        if(l1!=nullptr){
            currentNode->next= l1;
            l1= l1->next;

        }
        if(l2!=nullptr){
            currentNode->next= l2;
            l2= l2->next;

        }
        return head;


    }
    static void printLinkedList(const ListNode *head){
        std::cout<<"******************************"<<std::endl;
        while(head){
            std::cout<<"Head at position: "<<head<<" It's Value: "<<head->val<<" Next Pointing to: "<<head->next<<std::endl;
            head = head->next;
        }
    }
};



int main(){

    ListNode *l1 = new ListNode(1);
    ListNode* l12= new ListNode(2);
    ListNode* l13 = new ListNode(3);
    l1->next = l12;
    l12->next = l13;
    l13->next = nullptr;
    Solution::printLinkedList(l1);

    ListNode *l2 = new ListNode(1);
    ListNode* l22= new ListNode(3);
    ListNode* l23 = new ListNode(5);
    l2->next = l22;
    l22->next = l23;
    Solution::printLinkedList(l2);

    ListNode *l3=nullptr,*l4= new ListNode(0);

    ListNode * result = Solution::mergeTwoLists(l3,l4);
    Solution::printLinkedList(result);


}


