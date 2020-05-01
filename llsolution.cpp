#include "llsolution.h"

LLSolution::LLSolution()
{

}

ListNode *LLSolution::mergeTwoLists(ListNode *l1, ListNode *l2) {

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
            l1 = l1->next;}
        else {
            currentNode->next = l2;
            currentNode = l2;
            l2 = l2->next;}
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

void LLSolution::printLinkedList(const ListNode *head){
    std::cout<<"******************************"<<std::endl;
    while(head){
        std::cout<<"Head at position: "<<head<<" It's Value: "<<head->val<<" Next Pointing to: "<<head->next<<std::endl;
        head = head->next;
    }
}
