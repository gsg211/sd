#ifndef HEADER_H
#define HEADER_H

struct nod
{
    int data;
    nod* leg;
};

void sterge_cap(nod*& cap);
void afis(nod *p);
nod* cautare(nod *p,int data);
void inserare_cap(nod*& cap,int data);
void inserare_in(nod*q,int poz,int data);
void sterge_in(nod*p,int poz);
#endif 