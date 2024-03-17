#ifndef HEADER_H
#define HEADER_H

//lista problema 1 si problema 3
struct nod
{
    int data;
    nod* leg;
};

//lista problema 2
struct nod2
{
    char nume[20];
    char telefon[20];
    nod2* leg;
};

//functii p1
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

//functii p2
void inserare2(nod2* &cap,char nume[], char telefon[]);
void afis2(nod2 *p);
void cautaretelefon(nod2*p,char nume[]);
void sterge2(nod2*&cap,char nume[]);

//functii p3
void concat(nod* cap1,nod* cap2);
nod* interclass(nod* x,nod* y);
#endif 