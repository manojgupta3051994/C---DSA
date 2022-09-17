#include <iostream>
using namespace std;

//Doubly Link List

class Node{
  public:
  int data;
  Node *next;
  Node *prev;

  Node(int d){
    this->data = d;
    this->next = NULL;
    this->prev = NULL;
  }

  ~Node(){
    int val = this-> data;
    if(next != NULL){
      delete next;
      next = NULL;
    }
    cout << "memory free for node with data "<< val << endl;
   
  }
};

void print(Node *head){

  Node *temp = head;
  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int getlength(Node *head){

  Node *temp = head;
  int length = 0;
  while(temp !=NULL){
    temp = temp->next;
    length++;
  }
  return length;
 
}

void insertAtHead(Node *&head, int d){

  if(head == NULL){
    Node *temp = new Node(d);
    head = temp;
    return;
  }
  else{

  Node *temp= new Node(d);
  temp->prev = NULL;
  temp->next = head;
  head->prev = temp;
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
    temp->next = tail->next;
    temp->prev = tail;
    tail->next = temp;
    tail=temp;
  }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d){

  //first position
  if(position == 1){
    Node *h = new Node(d);
    h->prev = NULL;
    h->next = head;
    head->prev = h;
    head = h;
    return;
  }

  Node *temp = head; //starting from head, traverse to each node
  int cnt = 1;
 
  while(cnt < position){
    temp = temp->next;
    cnt++;
  }

  // Inserting at last position
  if(temp->next == NULL){
    temp->next = tail->next;
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
    return;
  }

  Node *nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next->prev = nodeToInsert;
  temp->next = nodeToInsert;
  nodeToInsert->prev = temp;
}



void deleteNode(Node *&head, int position){
  //deleting node from first position

  if (position == 1){
    Node *temp = head;
    temp->next->prev = NULL;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }
  else{
    Node *curr = head;
    Node *prev = NULL;
    int cnt = 1;
   
    while(cnt < position){
    prev = curr;
    curr = curr->next;
    cnt++;    
    }
   
    curr->prev = NULL;
    prev->next = curr->prev;
    curr->next = NULL;
    delete curr;
  }
}

int main(){
  Node *node1 = new Node(10);
  Node *head = node1;
  Node *tail = node1;
  print(head);
  cout << getlength(head)<<endl;  
  insertAtHead(head,11);
  print(head);
  insertAtTail(tail,12);
  print(head);
  cout << head->data <<endl;
  cout << tail->data <<endl;

  insertAtTail(tail,13);
  print(head);

  insertAtTail(tail,14);
  print(head);

  insertAtTail(tail,15);
  print(head);

  insertAtTail(tail,16);
  print(head);

  insertAtPosition(head,tail,1,100);
  print(head);
  cout << head->data <<endl;
  cout << tail->data <<endl;

  deleteNode(head,1);
  print(head);
  cout << head->data <<endl;
  cout << tail->data <<endl;
}