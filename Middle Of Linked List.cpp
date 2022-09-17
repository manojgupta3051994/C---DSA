// Middle of Linked List
// Approach Number 1

#include<iostream>
#include<vector>
using namespace std;


int getLength(Node *head){
    Node *temp = head;
    int length = 0;
   
    while(temp != NULL){
        length ++;
        temp= temp->next
    }
    return length;
}

Node *findMiddle(Node *head) {
    // Write your code here
   
    int len = getlength(head);
    int ans = len/2;
    Node *temp = head;
    int cnt = 0;
    while(ans<cnt){
        temp = temp->next;
        cnt++;        
    }
    return temp;
   
   
//Approach Number 2
Node *findMiddle(Node *head) {
    // Write your code here
   
    if (head == NULL || head->next == NULL){
        return head;
    }
   
    if (head->next->next == NULL){
        return head->next;
    }
   
    Node *slow = head;
    Node *fast = head->next;
   
    while(fast != NULL){
        fast = fast->next;
        if (fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
       
    }
    return slow;
   
}