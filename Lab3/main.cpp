#include <iostream>
#include "header.h"
#include <string.h>

int main()
{
    /*problema 1
    nod*cap=NULL;
    int x;
    std::cin>>x;
    while (x>0);
    {   
        inserare_cap(cap,x);
        std::cin>>x;
    } 
    */

    nod2*lista=NULL;
    inserare2(lista,"Biju","5226");
    inserare2(lista,"Andrei","0743");
    inserare2(lista,"Zerxes","0743");
    inserare2(lista,"Gigel","0743");
    inserare2(lista,"Aaneei","0743");
    inserare2(lista,"Anastasia","0743");
    inserare2(lista,"Bab","07435654");
    
    sterge2(lista,"Bab");
    sterge2(lista,"Aaneei");
    afis2(lista);

    char optiune[20]={},nume[20],telefon[20];
   
    while(1)
    {
        std::cout<<"Ce optiune alegi? ";
        std::cin>>optiune;
        if(strcmp(optiune,"0")==0)
        {
            break;
        }
        if(strcmp(optiune,"ins")==0)
        {
            std::cout<<"nume: ";
            std::cin>>nume;
            std::cout<<std::endl;
            std::cout<<"telefon: ";
            std::cin>>telefon;
            inserare2(lista,nume,telefon);
        }
        if(strcmp(optiune,"sterg")==0)
        {
            std::cout<<"nume: ";
            std::cin>>nume;
            std::cout<<std::endl;
            sterge2(lista,nume);
        }
        if(strcmp(optiune,"cauta")==0)
        {
            std::cout<<"nume: ";
            std::cin>>nume;
            std::cout<<std::endl;
            cautaretelefon(lista,nume);
        }
        if(strcmp(optiune,"afis")==0)
        {
            afis2(lista);
        }
    }
    return 0; 
}