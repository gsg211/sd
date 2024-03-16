#ifndef HEADER_H
#define HEADER_H

//lista problema 1
struct nod
{
    int data;
    nod* leg;
};

struct nod2
{
    char nume[20];
    char telefon[20];
    nod2* leg;
};


void sterge_cap(nod*& cap);
void afis(nod *p);
nod* cautare(nod *p,int data);
void inserare_cap(nod*& cap,int data);
void inserare_in(nod*q,int poz,int data);
void sterge_in(nod*p,int poz);
int k_element(nod *p,int k);
int mij_element(nod* p);
void afis_spate(nod *p);
nod* inversare(nod* cap);

void inserare_in2(nod2* p,char nume[], char telefon[]);
void inserare_cap2(nod2*& cap,char nume[], char telefon[]);
#endif 