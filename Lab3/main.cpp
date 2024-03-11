#include <iostream>
#include "header.h"

int main()
{
    nod*cap=NULL;
    inserare_cap(cap,4);
    inserare_cap(cap,3);
    inserare_cap(cap,2);
    inserare_cap(cap,1);
   
    inserare_in(cap,1,100);
    afis(cap);
    sterge_in(cap,2);
    afis(cap);
    return 0; 
}