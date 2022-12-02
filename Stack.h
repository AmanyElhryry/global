#include"global.h"

#define LINKED_STACK
#define NULL 0

#ifdef LINKED_STACK
typedef struct stacknode{
StackEntry entry ;
struct stacknode *next ;
//int size;
}StackNode;

typedef struct stack{
StackNode *top ;
}Stack;
#else
typedef struct stack {
int top;
StackEntry entry[MaxSize];
}Stack;

void CreatStack(Stack *ps);
void push (StackEntry e , Stack *ps);
int StackFull(Stack *ps);
void pop (StackEntry *pe , Stack *ps);
int StackEmpty(Stack *ps);
void ClearStack(Stack *ps);
void StackTop(StackEntry *pe , Stack *ps);
void TraverseStack(Stack *ps , void (*pf)(StackEntry));
int StackSize(Stack *ps);

#endif
