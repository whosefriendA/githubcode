//单链表
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Listnode{
      int val;
      struct ListNode *next;
 };
 struct Listnode* end_get_node(struct Listnode*p);

int main()
{
    struct Listnode *head=(struct Listnode*)malloc(sizeof(struct Listnode));
    head->next=NULL;
    struct Listnode *p;
    p=head;
    int n=0;
    end_get_node(p);
    while(p!=NULL){
        printf("%d",p->val);
        p=p->next;
    }
return 0;
}

struct Listnode* end_get_node(struct Listnode*p)
{
    struct Listnode *s=(struct Listnode*)malloc(sizeof(struct Listnode));
    scanf("%d",&s->val);
    p->next=s;
    s->next=NULL;
    p=s;
}
//双向循环链表
