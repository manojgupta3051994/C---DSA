Node *removeDuplicatesInSortedLL(Node *head){

  if (head == NULL)
    return NULL;

  Node *curr = head;

  while(curr!=NULL){
    if(curr->next != NULL || curr->data == curr->next){
      Node *curr_next_next = curr->next->next;
      Node *nodeToDelete = curr->next;
      delete nodeToDelete;
      curr->next = curr_next_next;
    }
    else{
      curr  = curr->next
    }
  }
  return head;
}


//Remove duplicates in unsorted list using map
#include<bits/stdc++.h>
Node *removeDuplicates(Node *head)
{     
    Node* curr = head;
    Node* prev = NULL;
    map<int, int> visited;
   
    while(curr != NULL){
        if(!visited[curr->data]){
            visited[curr->data] = 1;
            prev = curr;
            curr = curr -> next;
        }
        else{
            prev -> next = curr -> next;
            delete curr;
        }
        curr = prev -> next;
    }
    return head;
}