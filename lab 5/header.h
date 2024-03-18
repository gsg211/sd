#ifndef HEADER_H
#define HEADER_H
#define nr 20

//stiva ordonata +functii
struct stack_ord
{
    int sp;
    int data[nr];
};

void init_ord(stack_ord &s);
bool empty_ord(stack_ord s);
bool full_ord(stack_ord s);
bool push_ord(stack_ord &s,int element_nou);
bool pop_ord(stack_ord &s, int &data);
void cit_ord(stack_ord &s);
void afis_ord(stack_ord s);
int top_ord(stack_ord s);


//stiva generica inlantuita
struct stack_node
{
    int data;
    stack_node* next;
};

void push_linked(stack_node* &s,int data);
bool empty_linked(stack_node* s);
void init_linked(stack_node* &s);
int top_linked(stack_node* s);
int pop_linked(stack_node* &s);
void cit_linked(stack_node* &s);
void afis_linked(stack_node* s);

#endif 