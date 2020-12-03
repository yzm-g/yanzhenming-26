#ifndef _LinkStack_h_
#define _LinkStack_h_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int dataType;
typedef char chType;

typedef struct node {
        dataType data;
       struct node *next;
}LinkStack;

//初始化链栈
 LinkStack* InitStack();

//判断栈是否为空
int Empty(LinkStack *s);
//元素x进栈
void Push(LinkStack *s,dataType x);
//出栈
void Pop(LinkStack *s);

//取栈顶元素的值
dataType GetTop(LinkStack *s);
//计算表达式的值
int evaluate();
#endif
