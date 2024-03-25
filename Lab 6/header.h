#ifndef HEADER_H
#define HEADER_H
#define DIMMAX 8
typedef int type;

//tema 1 coada circulara alocata static
struct staticQueue 
{
    int head,tail;
    type vect[DIMMAX];
};
void initQueue(staticQueue& q);
void set(staticQueue& q, type a);
type get(staticQueue& q);
type front(staticQueue& q); 
int isEmpty(staticQueue& q);

//tema 2 coada circulara alocata dinamic 

struct Element
{
    type data;
    Element* succ;
};

struct dynamicQueue 
{
    Element* tail;
    //Element* head;
};

void initQueue2(dynamicQueue& q);
void set2(dynamicQueue& q, type a);
type get2(dynamicQueue& q);
type front2(dynamicQueue& q); 
int isEmpty2(dynamicQueue& q); 


//tema 3
struct Pozitie 
{
    int x,y;
};
typedef Pozitie Atom;
#endif