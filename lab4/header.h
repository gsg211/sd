#ifndef HEADER_H
#define HEADER_H
struct nod
{
    int data;
    nod* prev,*next;
};
void afis(nod* cap);
nod* citire();
void inserare_cap(nod*&cap,int data);
void inserare_poz(nod *p,int poz,int data);
void sterge_cap(nod*&cap);
void sterge_poz(nod *p,int poz);
void afis_lc(nod *cap);
nod* citire_lc();
void inserare_cap_lc(nod*&cap,int data);
#endif 