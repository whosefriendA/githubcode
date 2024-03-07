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
typedef struct DulNode
{
    int data;
    struct DulNode *prior;
    struct DulNode *next;
}DulNode,*DulinkList;
//插入
/* 把s插入m和m后面结点之间
s->next=m->next;
s->prior=m;
m->next->prior=s;
m->next=s;  */
//删除p结点
/* p->prior->next=p->next;
p->next->prior=p->prior;
free(p;)*/

// int partsort(int *a,int begin,int end){
//     int key=begin;
//     int left=begin;
//     int right=end;
//     while(left<right)
//     {
//         while(left<right&&a[right]>=a[key])
//         right--;
//         while(left<right&&a[left]<=a[key])
//         left++;
//         int meet=left;
//         swap(&a[meet],&a[key]);
//         return meet;
//     }
// }
// void quicksort(int*a,int begin,int end){
//     if(begin>=end)
//     return;
//     int meet=partsort(a,begin,end);
//     quicksort(a,begin,meet-1);
//     quicksort(a,meet+1,end);
// }
