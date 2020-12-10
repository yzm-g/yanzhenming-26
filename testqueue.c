#include "queue.h"
#include "queue.c"

int main ()
{
Lqueue queue, *q=&queue;
initqueue(q);
in(q,12);
in(q,34);
in(q,56);
Out(q);
in(q,78);
printf("队头元素：%d\n",frist(q));
printf("队尾元素：%d\n",last(q));




pqueue *b=createqueue();
        srand(time(0));
        printf("将9个随机数加入优先队列：\n");
        for (int i=0;i<9;i++)
        {int t= rand() %100;
                printf("%d ", t);
                Push(b, t);}
        printf("\n");
        printf("出队顺序:  \n");
        while (!Empty(b))
        {printf("%d ", Top(b));
Pop(b);}



dqueue*dq=createdeque();
push_back(dq,11);
push_front(dq,22);
push_back(dq,33);
push_front(dq,44);
push_front(dq,55);
pop_back(dq);
print(dq);



return 1;
}
