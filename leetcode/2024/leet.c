int Length(struct ListNode* head)

{
  int length = 0;
  while(head)
  {
    ++length;
    head = head -> next;
  }
  return length;
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
  int length = Length(head);
  struct ListNode* p = malloc(sizeof(struct ListNode));
  p -> val = 0, p -> next = head;
  struct ListNode* q = p;
  for(int i = 1; i < length-n+1; i++)
  {
    q = q -> next;
  }
  q -> next = q -> next -> next;
  struct ListNode* ans = p -> next;
  return ans;
}
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head==NULL)
    return NULL;
    struct ListNode *node=head;
    while(NULL!=head&&head->val==val)
    head=head->next;
    if(NULL==head)
    return head;
     while(node->next!=NULL){
         if(node->next->val==val)                                    
         node->next=node->next->next;
         else
         node=node->next;
     }
return head;
}