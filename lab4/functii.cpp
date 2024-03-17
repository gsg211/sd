#include <iostream>
#include "header.h"

//functii problema 1
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


//functii problema 2
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
    while (p->next!=cap)
    {
        std::cout<<p->data<<std::endl;
        p=p->next;
    }
    std::cout<<p->data<<std::endl;
    std::cout<<"\n";
}

void permutari_lc(nod *cap)
{
    nod*p=cap;
    while (p->next!=cap)
    {
        afis_lc(p);
        p=p->next;
    }
    afis_lc(p);
    p=p->next;;
}

nod* inversare(nod* cap)
{
    nod *p,*q,*r;
    p=cap;
    q=p->next;
    r=p->next->next;
    p->next=0;
    while(r->next!=cap)
    {
        q->next=p;
        p=q;
        q=r;
        r=r->next;
    }
    q->next=p;
    r->next=q;
    cap->next=r;
    return r;
}

//functii problema 3
void concat(nod* cap1,nod* cap2)
{
    nod*fin=cap1;
    while(fin->next!=cap1)
    {
        fin=fin->next;
    }
    fin->next=cap2;
    fin=fin->next;
    while(fin->next!=cap2)
    {
        fin=fin->next;
    }
    fin->next=cap1;
}

nod* interclass(nod* cap1,nod* cap2)
{
    nod* z=NULL;
    nod* x=cap1;
    nod* y=cap2;
    while(x->next!=cap1 && y->next!=cap2)
    {
        inserare_cap_lc(z,x->data);
        inserare_cap_lc(z,y->data);
        y=y->next;
        x=x->next;
    }
    while(x->next!=cap1)
    {
        inserare_cap_lc(z,x->data);
        x=x->next;
    }
    while (y->next!=cap2)
    {
        inserare_cap_lc(z,y->data);
        y=y->next;
    }
    return z;
}