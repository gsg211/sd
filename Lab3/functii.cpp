#include <iostream>
#include "header.h"

void inserare_cap(nod*& cap,int data)
{
    nod *p=new nod;
    p->leg=cap;
    p->data=data;
    cap=p;
}

nod* cautare(nod *p,int data)
{
    while(p!=NULL && p->data!=data)
    {
        p=p->leg;
    }
    return p;
}

void afis(nod *p)
{
    while(p!=NULL)
    {
        std::cout<<p->data<<std::endl;
        p=p->leg;
    }
    std::cout<<std::endl;
}

void sterge_cap(nod*& cap)
{
    nod *p =new nod;
    p=cap;
    cap=cap->leg;
    delete p;
}

void inserare_in(nod*p,int poz,int data)
{
    while(p!=NULL && poz)
    {
        p=p->leg;
    }
    nod* q;
    p->leg=q->leg;
    p->data=data;
    q->leg=p;
}
