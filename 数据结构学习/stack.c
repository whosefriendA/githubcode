// 栈
typedef struct
{
SElemType data[MAXSIZE];
/* 用于栈顶指针 */
int top;
}SqStack;
//进栈
Status Push(SqStack *S, SElemType e)
{
/* 栈满 */if (S->top == MAXSIZE - 1)
{
return ERROR;
}
/* 栈顶指针增加一 */
S->top++;
/* 将新插入元素赋值给栈顶空间 */
S->data[S->top] = e;
return OK;
}
//出栈
Status Pop(SqStack *S, SElemType *e)
{
if (S->top == -1)
return ERROR;
/* 将要删除的栈顶元素赋值给e */
*e = S->data[S->top];
/* 栈顶指针减一 */
S->top--;
return OK;
}