#include<iostream>
using namespace std;

//Singly Link List

class Node{

public:
int data;
Node *next;

Node(int data){
  this->data = data;
  this->next =NULL;
}

~Node(){
  int val = this->data;
  if(this->next !=NULL){
    delete next;
    next = NULL;
  }
  cout << "Memory is freed for node " << val << endl;
}
};

void print(Node *&head){

  Node *temp = head;

  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insertAtHead(Node *&head, int d){

  if(head == NULL){
    Node *temp = new Node(d);
    head = temp;
  }
  else{
    Node *temp = new Node(d);
    temp->next = head;
    head=temp;
  }
}

void insertAtTail(Node *&tail, int d){

  if(tail == NULL){
    Node *temp = new Node(d);
    tail = temp;
  }
  else{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
  }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d){

  //for inserting in first positin
  if(position == 1){
    Node *h = new Node(d);
    h->next = head;
    head = h;
    return;
  }

  Node *temp = head;
  int cnt = 1;

  while(cnt < position-1){
    temp = temp->next;
    cnt++;
  }

  //for inserting in last position
  if (temp->next == NULL){
    Node *t = new Node(d);
    tail->next = t;
    tail = t;
    return;
  }

  Node *nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
 
}

void deleteNode(Node *&head, int position){

  //deleting node from 1st position
  if (position == 1){
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }
  else{
    //Deleting from any middle or last node

    Node *curr = head;
    Node *prev = NULL;

    int cnt = 1;
   
    while(cnt<position){
      prev = curr;
      curr = curr->next;
      cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}


int main(){

  Node *node1 = new Node(10);
  Node *head = node1;
  Node *tail = node1;

  print(head);
  print(tail);

  insertAtHead(head,11);
  print(head);

  insertAtTail(tail,15);
  print(head);

  insertAtPosition(head,tail,4,50);
  print(head);

  deleteNode(head,4);
  print(head);
 
}