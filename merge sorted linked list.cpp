
    // code here
    if(head_A==NULL)
    return head_B;
    if(head_B==NULL)
    return head_A;
    if(head_A->data>head_B->data)
    swap(head_A,head_B);
   // Node *res=head_A;
   struct Node* res=head_A;
   //res=head_A;
 //   res=head_A;
    while(head_A!=NULL && head_B!=NULL)
    {
    Node *temp=NULL;
    while( head_A!=NULL&&head_A->data<=head_B->data )
    {
        temp=head_A;
        head_A=head_A->next;
    }
      temp->next=head_B;
      swap(head_A,head_B);
    }
    return res;