#include <iostream>
using namespace std;

//Circular Linked List

class Node{

  public:
  int data;
  Node *next;
 
Node(int d){
  this->data = d;
  this->next = NULL;
}

~Node(){
  int val = this->data;
  if(this->next !=NULL){
    delete next;
    next = NULL;
  }
  cout << "Memory freed for node of value is " << val << endl;
}
};

void print(Node *&tail){

  Node *temp = tail;

  if(tail == NULL){
    cout << "List is Empty " << endl;
  }
  do{
    cout << tail->data << endl;
    tail = tail->next;
  }while(tail!=temp);
  cout << endl;
}


void insertNode(Node *&tail, int element, int d){

  //if empty list
  if (tail == NULL){
    Node *temp = new Node(d);
    tail = temp;
    temp->next = temp;
  }
  else{
   
    Node *curr = tail;

    while(curr->data != element){
      curr = curr->next;
    }

    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
  }
}

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}


int main(){
  Node *node1 = new Node(11);
  Node *tail = node1;
  print(tail);

  insertNode(tail,2,1);
  print(tail);
}