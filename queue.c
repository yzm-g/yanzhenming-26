#include "queue.h"



void initqueue(Lqueue *q)
{
        q->f=(Node*)malloc(sizeof(Node));
        q->r=q->f;
}

int empty(Lqueue *q)
{return q->f==q->r; }

void in(Lqueue *q,datatype x)
{

        Node *t= (Node*)malloc(sizeof(Node));
        t->data=x;
        t->next=NULL;
        q->r->next=t;
        q->r=t;}

int Out(Lqueue *q)
{
                                                                                                                                if(empty (q)) exit(1);
        Node *p=q->f->next;
        q->f->next=p->next;
        free(p);}
 
    datatype frist(Lqueue *q) {
        return  q->f->next->data;}

datatype last(Lqueue *q) {
        return q->r->data;}

//优先队列

pqueue * createqueue()
{pqueue *b=(pqueue*)malloc(sizeof(pqueue));
        b->size=0;
        return b;}

int Empty(pqueue *b) {
        return b->size==0;}

void Push(pqueue *b,datatype x)
{if (b->size ==maxsize) exit(1);
b->data[b->size++]=x;}



void Pop(pqueue *b)
{if (Empty(b)) exit(1);
        int max = b->data[0],k=0;
        for (int i=1;i<b->size;i++)
                if (b->data[i]>max)
                {max=b->data[i];k=i;}
               b->data[k] = b->data[b->size-1];
                b->size--;}

datatype Top(pqueue *b)
{if(Empty(b)) exit(1);
int max = b->data[0];
for (int i=1;i<b->size;i++)
if (b->data[i]>max)
max=b->data[i];
return max;}

//双端队列
dqueue *createdeque()
{dqueue *he;
        he=(dqueue*)malloc(sizeof(dqueue));
        he->le=he->ri=he;
        return he;}

int size(dqueue *dq)
{struct node *p=dq->ri;
        int k=0;
        while (p!=dq) {
                k++;
                p=p->ri;
        }
        return k;}

int Dempty(dqueue *dq)
{return dq->ri==dq;}
datatype front(dqueue *dq){
        if (Dempty(dq)) exit(1);
        return dq->ri->data;}

datatype back(dqueue *dq) {
        if (Dempty(dq)) exit(1);
        return dq->le->data;}

void push_front(dqueue *dq,datatype x) {
struct node *s=(struct node*)malloc(sizeof(struct node));
s->data=x;
s->le=dq;
s->ri=dq->ri;
dq->ri->le=s;
dq->ri=s;}

void push_back(dqueue *dq,datatype y) {
        struct node *s=(struct node*)malloc(sizeof(struct node));
        s->data=y;
        s->ri=dq;
        s->le=dq->le;
        dq->le->ri=s;
        dq->le=s;}

void pop_front(dqueue *dq)
{if (Dempty(dq)) exit(1);
        struct node *p=dq->ri;
        p->ri->le=dq;
        dq->ri=p->ri;
         free(p);}

void pop_back(dqueue *dq)
{if (Dempty(dq)) exit(1);
struct node *p=dq->le;
p->le->ri=dq;
dq->le=p->le;
free(p);}

void clear(dqueue *dq)
{struct node *p,*q;
        p=dq->ri;
        while (p !=dq) {
        q=p;
        p=p->ri;
        free(q);}
        dq->le=dq->ri=dq;}

void print(dqueue *dq){
        struct node *p=dq->ri;
        while (p !=dq)
        {printf("%d ",p->data);
        p=p->ri;}
        printf("\n");
}
                                         
                                                         

                                                                                                   
