#include <iostream>
#include "header.h"

int main()
{
    /*
    staticQueue q;
    initQueue(q);
    set(q,2);
    set(q,4);
    set(q,5);
    if(!isEmpty(q))
    {
        std::cout<<get(q)<<std::endl;
    }
    if(!isEmpty(q))
    {
        std::cout<<get(q)<<std::endl;
    };
    */


    dynamicQueue q;
    initQueue2(q);
    set2(q,1);
    set2(q,2);
    set2(q,3);

    if(!isEmpty2(q))
    {
        std::cout<<get2(q)<<std::endl;
    };
    if(!isEmpty2(q))
    {
        std::cout<<get2(q)<<std::endl;
    };
    if(!isEmpty2(q))
    {
        std::cout<<get2(q)<<std::endl;
    };
    return 0; 
}