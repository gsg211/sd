#include <iostream>
#include <string.h>
#include "header.h"

//problema 1
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

void swap(int &a,int &b)
{
    int aux;
    aux=a;
    a=b;
    b=aux;
}

void inserare_in(nod*p,int poz,int data)
{
    int pozc=1;
    
    while(p!=NULL && pozc!=poz)
    {
        p=p->leg;
        pozc++;   
    }
    nod* q=new nod;
    q->data=data;   
    q->leg=p->leg;
    p->leg=q;
    swap(q->data,p->data);
}

void sterge_in(nod*p,int poz)
{
    int pozc=0;
    
    while(p!=NULL && pozc!=poz-1)
    {
        p=p->leg;
        pozc++;   
    }
    nod* q=p->leg;
    p->leg=p->leg->leg;
    swap(q->data,p->data);
    delete q;
}

int k_element(nod* p, int k)
{
    nod *q;
    int i;
    q = p;
    
    for(i = 1; i < k; i++)
    {
        q = q->leg;
    }
    while(q->leg != NULL)
    {
        q = q->leg;
        p = p->leg;
    }
    return p->data;
}

int mij_element(nod* p)
{
    nod *q;
    int i;
    q = p;
    while(q->leg != NULL)
    {
        q = q->leg->leg;
        p = p->leg;
    }
    return p->data;
}

void afis_spate(nod *p)
{
    if(p)
    {
        afis_spate(p->leg);
        std::cout<<p->data<<std::endl;
    }
}

nod* inversare(nod* cap)
{
    nod *p,*q,*r;
    p=cap;
    q=p->leg;
    r=p->leg->leg;
    p->leg=0;
    while(r->leg!=0)
    {
        q->leg=p;
        p=q;
        q=r;
        r=r->leg;
    }
    q->leg=p;
    r->leg=q;
    return r;
}

//problema 2

void inserare_cap2(nod2*& cap,char nume[], char telefon[])
{
    nod2 *p=new nod2;
    p->leg=cap;
    strcpy(p->nume,nume);
    strcpy(p->telefon,telefon);
    cap=p;
}

void inserare_in2(nod2* p,char nume[], char telefon[])
{
    char temp[20];
    while((p!=NULL && p->leg!=NULL) &&strcmp(p->nume,p->leg->nume)>0)
    {
        p=p->leg;
    }
    
    nod2 *q=new nod2;
    strcpy(q->nume,nume);
    strcpy(q->telefon,telefon);   
    q->leg=p->leg;
    p->leg=q;

    strcpy(temp,q->nume);
    strcpy(q->nume,p->nume);
    strcpy(p->nume,temp);

    strcpy(temp,q->telefon);
    strcpy(q->telefon,p->telefon);
    strcpy(p->telefon,telefon);
}