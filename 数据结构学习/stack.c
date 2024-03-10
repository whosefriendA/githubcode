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

//两栈共享空间（用在两栈数据类型相同时，尤其是两栈一个压入时另一个弹出的情况下）
typedef struct
{
SElemType data[MAXSIZE];
int top1;/* 栈1栈顶指针 */
int top2;/* 栈2栈顶指针 */
} SqDoubleStack;
Status Push(SqDoubleStack *S, SElemType e,

int stackNumber)
{
/* 栈已满，不能再push新元素了 */
if (S->top1 + 1 == S->top2)
return ERROR;
/* 栈1有元素进栈 */
if (stackNumber == 1)
/* 若栈1则先top1+1后给数组元素赋值 */
S->data[++S->top1] = e;
/* 栈2有元素进栈 */
else if (stackNumber == 2)
/* 若栈2则先top2-1后给数组元素赋值 */
S->data[--S->top2] = e;
return OK;
}