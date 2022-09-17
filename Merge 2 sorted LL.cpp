Node *solve(Node *first, Node *second){

  Node *curr1 = first;
  Node *curr2 = second;
  Node *next1 = first->next;
  Node *next2 = curr2->next;

  while (first->next != NULL && curr2 != NULL){

    if ((curr2->data >= curr1->data)&&(curr2->data <= next1->data)){

      //add node in between the node of first list
      curr1->next = curr2;
      next2 = curr2->next;
      curr2->next = next1;

      //updating pointer
      curr1 = curr2;
      curr2 = next2;
     
    }
    else{
      curr1 = next1;
      next1 = next1->next;

      if(next1 == NULL){
        curr1->next = curr2;
        return first
      }
    }
  }

  return first
}



Node *sort(Node *first, Node *second){

  if(first == NULL)
    return second;

  if(second == NULL)
    return first;

  if(first->data <= second->data){
    return solve(first,second);
  }
  else{
    solve(second,first);
  }
}