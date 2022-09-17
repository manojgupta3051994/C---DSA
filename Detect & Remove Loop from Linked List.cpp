
#include <iostream>
#include <vector>
using namespace std;



bool detectLoop(Node *head){
  //base case
  if (head == NULL){
    return false;
  }

  map<Node*, bool> visited;

  Node *temp = head;
  while(temp != NULL){

    if(visited[temp] == true){
      return true;
    }
    visited[temp] = true;
    temp = temp->next;
  }
  return false;
}

Node *floydDetectLoop(Node *head){

  if(head == NULL){
    return NULL
  }

  Node *slow = head;
  Node *fast = head;

  while(slow != NULL || fast != NULL){
   
    fast = fast->next;
    if(fast != NULL){
      fast = fast->next;
    }
    slow = slow->next;

    if (slow == fast)
      return slow;
  }
  return NULL;
}



Node *getStartingNode(Node *head){
  if (head == NULL){
    return NULL;
  }

  Node *intersection = floydDetectLoop(head);
  Node *slow = head;

  while(slow != intersection){
    slow = slow->next;
    intersection = intersection->next;
  }
  return slow;

 
void removeLoop(Node *head){

  if (head == NULL)
    return;

  Node *startofloop = getStartingNode(removeloop);
  Node *temp = startofloop;

  while(temp != startofloop){
    temp = tem->next;
  }
  temp->next = NULL;
}

 
 







 
}