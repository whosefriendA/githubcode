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
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* reverseList(struct ListNode* head){
    //保存cur的下一个结点
    struct ListNode* temp;
    //pre指针指向前一个当前结点的前一个结点
    struct ListNode* pre = NULL;
    //用head代替cur，也可以再定义一个cur结点指向head。
    while(head) {
        //保存下一个结点的位置
        temp = head->next;
        //翻转操作
        head->next = pre;
        //更新结点
        pre = head;
        head = temp;
    }
    return pre;
}