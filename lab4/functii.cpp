#include <iostream>
#include "header.h"

void inserare_cap(nod*&cap,int data)
{
    nod *p=new nod;
    p->data=data;
    p->next=cap;
    p->prev=NULL;

    if (cap != NULL)
        cap->prev = p;
    
    cap=p;
    
}

nod* citire()
{
    nod* p=NULL;
    int x;
    std::cin>>x;
    while(x!=0)
    {
        inserare_cap(p,x);
        std::cin>>x;
    }
    return p;
}

void afis(nod *p)
{
    while(p!=NULL)
    {
        std::cout<<p->data<<std::endl;
        p=p->next;
    }
    std::cout<<std::endl;
}

void inserare_poz(nod *p,int poz,int data)
{
    int poz_curent=1;
    while(p!=NULL && poz_curent!=poz)
    {
        p=p->next;
        poz_curent++;
    }
    nod* q=new nod;
    q->data=data;
    q->prev=p;
    q->next=p->next;
    q->next->prev=q;
    p->next=q;
}

void sterge_cap(nod*&cap)
{
    nod*p=cap;
    cap=cap->next;
    cap->prev=NULL;
    delete p;
}

void sterge_poz(nod *p,int poz)
{
    int poz_curent=0;
    while(p!=NULL && poz_curent!=poz)
    {
        p=p->next;
        poz_curent++;
    }
    nod* q=p;
    q->prev->next=q->next;
    q->next->prev=q->prev;
    delete q;
}

void inserare_cap_lc(nod*&cap,int data)
{
    nod *p=new nod;
    p->data=data;
    if(cap==NULL)
    {
        cap=p;
        cap->next=cap;
    }
    else
    {
        p->next=cap->next;
        cap->next=p;
        cap=p;
    }
}

nod* citire_lc()
{
    nod* p=NULL;
    int x;
    std::cin>>x;
    while(x!=0)
    {
        inserare_cap_lc(p,x);
        std::cin>>x;
    }
    return p;
}

void afis_lc(nod *cap)
{
    nod*p=cap;
    if(p!=NULL)
    {
        do
        {
            std::cout<<p<<std::endl;
            p=p->next;
        } while (p!=cap);
        
    }
}