Sort 0s, 1s and 2s in a Linked List

//Approach 1

Node *sortList(Node *head){

  Node *zerocount = NULL;
  Node *onecount = NULL;
  Node *twocount = NULL;

  Node *temp = head;

  while(temp != NULL){
   
    if(temp->data == 0)
      zerocount ++;

    else if(temp->data ==1)
      onecount ++;

    else if(temp->data == 2)
      twocount ++;

    temp = temp->next;
  }

  temp = head;

  while(temp != head){

    if (zerocount != 0){
      temp->data = 0;
      zerocount --;
    }
    else if (onecount != 0){
      temp->data = 1;
      onecount --;
    }
    else if (twocount != 0){
      temp->data = 2;
      twocount --;
    }
    temp = temp->next;
     
  }
  return head;
}




//Approach 2 - data replacement is not allowed, we can replace links


void insertAtTail(Node *&tail, Node *curr){
  tail->next = curr;
  tail = curr;
}

Node *zeroHead = new Node(-1);
Node *zeroTail = zeroHead;
Node *oneHead = new Node(-1);
Node *oneTail = oneHead;
Node *twoHead = new Node(-1);
Node *twoTail = twoHead;

Node *curr = head;

while (curr != head){

  int value = curr->data;

  if (value == 0){
    insertAtTail(zeroTail,curr);
  }
  else if (value == 1){
    insertAtTail(oneTail,curr);
  }
  else if (value == 2){
    insertAtTail(twoTail,curr);
  }

  curr = curr->next;
}

if (oneHead->next == NULL){
  zeroTail->next = oneHead->next;
}
else{
  zeroTail->next = twoHead->next;
}

oneTail->next = twoHead->next;
twoTail->next = NULL;

head = zeroHead->next;

delete zeroHead;
delete oneHead;
delete twoHead;

return head;