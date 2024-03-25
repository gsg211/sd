#ifndef HEADER_H
#define HEADER_H
#define DIMMAX 8
typedef int type;

//alocata static
struct dynamicQueue 
{
    int head,tail;
    type vect[DIMMAX];
};
void initQueue(dynamicQueue& q);
void set(dynamicQueue& q, type a);
type get(dynamicQueue& q);
type front(dynamicQueue& q); 
int isEmpty(dynamicQueue& q);

//coada alocata dinamic 

struct Element
{
    type data;
    Element* succ;
};

struct Queue 
{
    Element* tail;
    Element* head;
};

void initQueue2(Queue& q);
void set2(Queue& q, type a);
type get2(Queue& q);
type front2(Queue& q); 
int isEmpty2(Queue& q); 


#endif