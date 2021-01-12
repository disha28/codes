 bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return true;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        ListNode *temp=head;
        while(slow!=NULL)
        {
            if(temp->val!=slow->val)
                return false;
            slow=slow->next;
            temp=temp->next;
            
        }
        return true;
        
    }
    ListNode *reverse(ListNode *head)
    {
        ListNode *dummy=NULL;
        while(head!=NULL)
        {
            ListNode *nex=head->next;
            head->next=dummy;
            dummy=head;
            head=nex;
        }
        return dummy;
    }
};