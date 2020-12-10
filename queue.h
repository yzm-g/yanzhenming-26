#ifndef _queue_h_
#define _queue_h_

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>


typedef int datatype;
typedef struct Node
{datatype data;
        struct Node *next;}Node;
        typedef struct
{struct Node *f,*r;}Lqueue;

#define  maxsize 100

typedef struct pqueue{
        datatype data [maxsize];
        int size;
}pqueue;


typedef struct node{
        datatype data;
        struct node *le,*ri;
}dqueue;
void initqueue(Lqueue *q);

int empty(Lqueue *q);

void in(Lqueue *q,datatype x);

int Out(Lqueue *q);

datatype frist(Lqueue *q);

datatype last(Lqueue *q);

//优先队列


pqueue* createqueue();

int Empty(pqueue *b);

void Push(pqueue *b,datatype x);

void Pop(pqueue *b);
datatype Top(pqueue *b);

//双端队列



dqueue* createdeque();

int Dsize(dqueue *dq);

int Dempty(dqueue *dq);

datatype front(dqueue *dq);

datatype back(dqueue *dq);

void push_front(dqueue *dq,datatype x);

void push_back(dqueue *dq,datatype y);

void pop_front(dqueue *dq);

void pop_back(dqueue *dq);

void clear(dqueue *dq);

void print(dqueue *dq);

#endif
                                     
