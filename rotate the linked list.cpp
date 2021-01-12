class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL|| head->next==NULL||k==0)
            return head;
        ListNode *curr=head;
        int c=1;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            c++;
        }
        
        if(k>=c)
        k=k%c;
        
        curr->next=head;
     //   ListNode *temp=head;
        k=c-k;
        while(k--)
        {
            curr=curr->next;
        }
        head=curr->next;
        curr->next=NULL;
        return head;
        
        
    }
};