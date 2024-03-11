#include <iostream>
#include <chrono>
#include "header.h"
#include <stdlib.h>

#define n 100
int main()
{
    /*laborator

    int a[n];
    //initializare cu valori random
    for(int i=0;i<n;i++)
    {
        //a[i]=rand() % 100 + 1;
    }
    
    //std::chrono::system_clock::time_point<std::chrono::system_clock> start, end;
    //start = std::chrono::system_clock::now();

    //bubblesort(a,n);
    //insertionsort(a,n);
    //selectionsort(a,n);

    
    if(brutesearch(a,n,4))
    {
        std::cout<<"gasit\n";
    }
    else
    {
        std::cout<<"negasit\n";
    }
    
    if(binarysearch(a,n,4))
    {
        std::cout<<"gasit\n";
    }
    else
    {
        std::cout<<"negasit\n";
    }
    
    //std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end -start).count() << " ms" << std::endl;
    //std::cout << std::chrono::duration_cast<std::chrono::microseconds>(end -start).count() << " us" << std::endl;
    */
    
    //tema:
    /*
    int mat[100][100]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    //p1
    parcTrig(mat,3,3);
    int mat2[100][100] = { { 1, 2, 3, 4 }, 
                  { 12, 13, 14, 5 }, 
                  { 11, 16, 15, 6 }, 
                  { 10, 9, 8, 7 } };
    //p2
    rotire(mat,3);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            std::cout<<mat[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    //p2
    int a[]={1,2,-4,100,-1,50,51};
    std::cout<<secvMax(a,7)<<std::endl;
    */
    
    int mat[100][100]={{1,2,3},
                       {4,5,6},
                       {7,8,9}};
    int i=-1,j=-1;
    //gaseste(mat,3,3,i,j,3);
    if(i==-1 || j==-1)
    {
        std::cout<<"nu a fost gasit\n";
    }
    else
    {
        std::cout<<"X se afla la pozitiile \n"<<i<<" "<<j<<std::endl;
    }
    return 0; 
}   