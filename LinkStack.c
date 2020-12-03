#include "LinkStack.h"                                                                                                  



//初始化链栈
LinkStack* InitStack() {
         LinkStack *y = (LinkStack*)malloc(sizeof(LinkStack));
        y->next = NULL;
       return y;
}

//判断栈是否为空
int Empty(LinkStack *s) {
        return s->next == NULL;
}
//元素x进栈
void Push(LinkStack *s,dataType x){
        LinkStack *y = (LinkStack *)malloc(sizeof(LinkStack));
        y->data = x;
        y->next = s->next;
        s->next = y;}


void Pop(LinkStack *s) {                                                                                                        if (Empty(s)) exit(1);                                                                                                  LinkStack *p = s->next;                                                                                                 s->next = p->next;
        free(p);
   //取栈顶元素的值
dataType GetTop(LinkStack *s)
         {
       return s->next->data;
       return 0;
}


//表达式求值
int priority(char x)

{switch (x)

        {case '+':
         case '=':
         case '-': return 1;
         case '*':
         case '/': return 2;
         case '(': return 3;
        }
}
double operate (double a,double b,char op)
{switch(op)
        {case '+': return a+b;
         case '-': return a-b;
         case '*': return a*b;
         case '/': return a/b;}
}
int evaluate (){
        printf("输入表达式:");
        char op;
        char t[1001], s2[500];
        double s1[500];
        int top1=-1,top2=-1;
        double q,w;
        gets(t);
        for (int i=0; i<strlen(t);i++) {
                if(t[i]>='0' && t[i]<='9')
                {
                double value = 0;
                while (t[i]>='0' && t[i]<='9')
                { value =10*value + t[i] -'0';
                i++;}
                if (t[i] == '.')
                {int r=10;
                i++;
                while (t[i]>='0' && t[i]<='9')
                {
                        value +=(t[i]-'0')/r;
                        r=10*r;
                        i++;}
                }
                s1[++top1]= value;}
                if (t[i] ==')')
                {
                while (s2[top2] !=')')
                { w=s1[top1--];
                                        q=s1[top1--];
                  op=s2[top2--];
                 s1[++top1]=operate(q,w,op);}
                top2--;}
                else{
                while (top2!=-1 && s2[top2]!='(' && priority(t[i])<=priority(s2[top2]))
                { w=s1[top1--];
                  q=s1[top1--];
                  op=s2[top2--];
                  s1[++top1]=operate(q,w,op);}

                  s2[++top2]=t[i];
                }
        }
        printf("输出结果:%.2f\n",s1[top1]);
}
               
                                                                                                    
