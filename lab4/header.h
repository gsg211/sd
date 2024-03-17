#ifndef HEADER_H
#define HEADER_H

//pt lista circulara am folosit tot acelasi struct
//dar nu am utilizat prev

//structul pt liste
struct nod
{
    int data;
    nod* prev,*next;
};

//problema 1
void afis(nod* cap);
nod* citire();
void inserare_cap(nod*&cap,int data);
void inserare_poz(nod *p,int poz,int data);
void sterge_cap(nod*&cap);
void sterge_poz(nod *p,int poz);

//problema 2
void afis_lc(nod *cap);
nod* citire_lc();
void inserare_cap_lc(nod*&cap,int data);
void permutari_lc(nod *cap);
nod* inversare(nod* cap);

//problema 3
void concat(nod* cap1,nod* cap2);
nod* interclass(nod* cap1,nod* cap2);
#endif 