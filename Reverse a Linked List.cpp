//Reverse a Link List :-

//Approach 1 - Iterative Method

#include<iostream>
#include<vector>
using namespace std;

Node *reverseLinkedList(Node *head)
{
    // Write your code here
   
    if(head == NULL || head->next == NULL){
        return head;
    }
   
    Node *curr = head;
    Node *prev = NULL;
    Node *forward = NULL;
   
    while (curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}



//Approach 2 - Recursion Method

void reverse(Node *head, Node *curr, Node *prev){
   
   
    //base case
    if(curr == NULL){
        head = prev;
        return;
    }
   
    Node *forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;
}

Node *reverseLinkedList(Node *head)
{
    // Write your code here
    Node *curr = head;
    Node *prev = NULL;
    reverse(head,curr,prev);
    return prev;
   
}



//Approach 3 - Recursion Method

void reverse(Node *head, Node *curr, Node *prev){
   
   
    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }
   
    int smallhead = reverse(head->next);
   
    head->next->next = head;
    head->next = NULL;
   
    return smallhead;
}

Node *reverseLinkedList(Node *head)
{
    // Write your code here
    return reverse(head);
   
}
