Node *getMid(Node *head){

  Node *slow = head;
  Node *fast = head->next;

  while(fast != NULL && fast->next != NULL){
    fast = fast->next->next;
    slow = slow->next;
  }
  return slow;
 }

Node *reverse(Node *head){

  Node *curr = head;
  Node *prev = NULL;
  Node *forward = NULL;

  Node *temp = head;

  while(temp != NULL){

    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
  }
  return prev;
}


bool isPalindrome(Node *head){

  if (head == NULL || head->next == NULL)
    return true;

  //Step 1 - get middle element of LL
  Node *middle = getMid(head);

  //Step 2 - Reverse the elements from middle->next till last
  Node *temp = middle->next;

  middle->next = reverse(temp);

  //Step 3 - Compare both halves

  Node *head1 = head;
  Node *head2 = middle->next;
  while(head2 != NULL){
    if (head1->data != head2->data)
      return false;
    head1 = head1->next;
    head2 = head2->next;
  }
  return true;
  }

}