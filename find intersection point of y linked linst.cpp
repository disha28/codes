int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    if(head1==NULL ||head2==NULL)
    return -1;
   struct Node* a= head1;
    struct Node* b=head2;
    while(a!=b)
    {
        a=a==NULL?head2 : a->next;
        b=b==NULL?head1 : b->next;
    }
    return a->data;
}
