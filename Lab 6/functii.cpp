#include <iostream>
#include "header.h"

//functii pt coada alocata static 

void initQueue(dynamicQueue& q)
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

void set(dynamicQueue& q, type a)
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

int isEmpty(dynamicQueue& q)
{
    return q.head==q.tail;
}

type get(dynamicQueue& q)
{
    type aux;
    
    aux=q.vect[q.head];
    q.head=nextPos(q.head);
    return aux;
      
}

type front(dynamicQueue& q)
{
    return q.vect[q.head];
}


//functii pt coada alocata dinamic

void initQueue2(Queue& q)
{
    q.head=0;
    q.tail=0;
}

int isEmpty2(Queue& q)
{
    return q.head==0 && q.tail==0;
}

void set2(Queue& q, type a)
{
    Element* p=new Element;
    p->data=a;
    if(isEmpty2(q))
    {
        q.tail=p;
        q.head=p;
    }
    else
    {
        q.tail->succ=p;
        q.tail=p;
    }
}

type get2(Queue& q)
{
    Element* p;
    type a;
    p=q.head;
    a=q.head->data;
    //daca are un singur element
    if(q.head==q.tail)
    {
        q.tail=0;
        q.head=0;
        delete p;
    }
    else
    {
        q.head=q.head->succ;
        delete p;
    }
    return a;
}

type front2(Queue& q)
{
    return q.head->data;
}