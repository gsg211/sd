#include <iostream>
#include "header.h"

//functii pt coada alocata static 

void initQueue(staticQueue& q)
{
    q.head=0;
    q.tail=0;
}

int nextPos(int index)
{
    if(index<DIMMAX-1)
    {
        return index+1;
    }
    return 0;
}

void set(staticQueue& q, type a)
{
    if(q.head==nextPos(q.tail))
    {
        std::cout<<"Stiva este plina";
    }
    else
    {
        q.vect[q.tail]=a;
        q.tail=nextPos(q.tail);
    }
}

int isEmpty(staticQueue& q)
{
    return q.head==q.tail;
}

type get(staticQueue& q)
{
    type aux;
    aux=q.vect[q.head];
    q.head=nextPos(q.head);
    return aux;
}

type front(staticQueue& q)
{
    return q.vect[q.head];
}


//functii pt coada circulara alocata dinamic

void initQueue2(dynamicQueue& q)
{
    q.tail=0;
}

int isEmpty2(dynamicQueue& q)
{
    return q.tail==0;
}

void set2(dynamicQueue& q, type a)
{
    if(isEmpty2(q))
    {
        q.tail=new Element;
        q.tail->data=a;
        q.tail->succ=q.tail;
    }
    else
    {
        Element* p=new Element;
        p->data=a;
        p->succ=q.tail->succ;
        q.tail->succ=p;
        q.tail=p;
    }

}

type get2(dynamicQueue& q)
{
    Element* p;
    type a;
    p=q.tail->succ;
    a=p->data;

    q.tail->succ=p->succ;
    delete p;
    
    return a;
}

type front2(dynamicQueue& q)
{
    return q.tail->data;
}

//tema 3 