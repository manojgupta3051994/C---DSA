
#include<iostream>
#include<vector>
using namespace std;

bool isCircular(Node *head){
   //empty list
   if (head == NULL){
     return true;
   }

   Node *temp = head->next;
   if(temp != NULL || temp != head){
     temp = temp->next;
   }

   if(temp == head){
     return true;
   }
   return false;
 }