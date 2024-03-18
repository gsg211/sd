#include <iostream>
#include "header.h"

//stiva ordonata
void init_ord(stack_ord &s)
{
    s.sp=-1;
}

bool empty_ord(stack_ord s)
{
    if(s.sp==-1)
    {
        return true;
    }
    return false;
}

bool full_ord(stack_ord s)
{
    if(s.sp==nr)
    {
        return true;
    }
    return false;
}

bool push_ord(stack_ord &s,int element_nou)
{
    if(!full_ord(s))
    {
        s.sp++;
        s.data[s.sp]=element_nou;
        return true;
    }
    return false;
}

bool pop_ord(stack_ord &s, int &data)
{
    if(!empty_ord(s))
    {
        data=s.data[s.sp];
        s.sp--;
        return true;
    }
    return false;
}

void afis_ord(stack_ord s)
{
    int data;
    std::cout<<"Afisare: ";
    while(pop_ord(s,data))
    {
        std::cout<<data<<" ";
    }
    std::cout<<std::endl;   
}

void cit_ord(stack_ord &s)
{
    int data;
    std::cout<<"introdu val: ";
    std::cin>>data;
    while(!full_ord(s) && data>0)
    {
        push_ord(s,data);
        std::cout<<"introdu val: ";
        std::cin>>data;
    }
}

int top_ord(stack_ord s)
{
    return s.data[s.sp];
}



//functii stiva inlantuita

void init_linked(stack_node* &s)
{
    s=NULL;
}

bool empty_linked(stack_node* s)
{
    if(s==NULL)
    {
        return true;
    }
    return false;
}

void push_linked(stack_node* &s,int data)
{
    stack_node*p=new stack_node;
    p->data=data;
    p->next=s;
    s=p;
}

int top_linked(stack_node* s)
{
    return s->data;
}

int pop_linked(stack_node* &s)
{
    int ret=s->data;
    
    stack_node* p=new stack_node;
    p=s;
    
    s=s->next;

    delete p;
    return ret;
}

void cit_linked(stack_node* &s)
{
    int data;
    std::cout<<"introdu val: ";
    std::cin>>data;
    while(data>0)
    {
        push_linked(s,data);
        std::cout<<"introdu val: ";
        std::cin>>data;
    }
}

void afis_linked(stack_node* s)
{
    int data;
    stack_node* p=s;
    while(!empty_linked(p))
    {
        data=pop_linked(p);
        std::cout<<data<<" ";
    }
    std::cout<<std::endl;   
}

