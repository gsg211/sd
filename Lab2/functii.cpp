#include <iostream>
#include "header.h"

void bubblesort(int a[],int n)
{
    int sw=0,i,aux;
    do
    {
        sw=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
                sw=1;
            }
        }
    } while (sw);
}

void selectionsort(int a[],int n)
{
    int min,i,j,aux;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        aux=a[i];
        a[i]=a[min];
        a[min]=aux;
    }
}

void insertionsort(int a[],int n)
{
    int min,i,j,aux;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
}

bool brutesearch(int a[],int n, int x)
{
    int Sol = -1, Left = 0, Right = n;
    while(Left <= Right)
    {
        int Mid = (Left+Right) / 2;
        if(a[Mid] == x)
        {
            Sol = Mid;
            break;
        }
        if(a[Mid] > x)
            Right = Mid - 1;
        if(a[Mid] < x)
            Left = Mid + 1;
    }
    return Sol;
}

bool binarysearch(int a[],int n, int x)
{
    int l=0,r=n,mid;
    while(l<r)
    {
        mid=(r+l)/2;
        if(a[mid]==x)
        {
            return true;
        }
        if(a[mid]<x)
        {
            r=mid+1;
        }
        else
        {
            l=mid-1;
        }
    }
    return false;
}

//tema:
//p1
void parcTrig(int a[100][100],int l,int c)
{
    int sus=0,jos=l-1,stg=0,dr=c-1,directie=1;
    int afis;
    int i;
    while(sus<=jos && stg<=dr)
    {
        if(directie==1)
        {
            for(i=stg;i<=dr;i++)
            {
                afis=a[sus][i];
                std::cout<<a[sus][i]<<" ";
            }
            sus++;
            directie=2;
        }
        else if(directie==2)
        {
            for(i=sus;i<=jos;i++)
            {
                afis=a[i][dr];
                std::cout<<a[i][dr]<<" ";
            }
            dr--;
            directie=3;
        }
        else if(directie==3)
        {
            for(i=dr;i>=stg;--i)
            {
                afis=a[jos][i];
                std::cout<<a[jos][i]<<" ";
            }
            jos--;
            directie=4;
        }
        else if(directie==4)
        {
            for(i=jos;i>=sus;i--)
            {
                afis=i;
                std::cout<<a[i][stg]<<" ";
            }
            stg++;
            directie=1;
        }
    }
}

//p2
void rotire(int a[][100],int n)
{
    for (int x=0;x<n/2;x++) 
    {
        for (int y=x;y<n-x-1;y++) 
        {
            int aux=a[x][y];
            a[x][y]=a[y][n-1-x];
            a[y][n-1-x]=a[n-1-x][n-1-y];
            a[n-1-x][n-1-y]=a[n-1-y][x];
            a[n-1-y][x]=aux;
        }
    }
}

//p3
int secvMax(int a[],int n)
{
    int i,smax=a[0],sc=a[0];
    for(i=1;i<n;i++)
    {
        if(sc<0)
        {
            sc=0;
        }
        sc+=a[i];
        if(sc>smax)
        {
            smax=sc;
        }
    }
    return smax;
}

//p4

bool binarysearch2(int a[],int n, int x,int &poz)
{
    int l=0,r=n,mid;
    while(l<r)
    {
        mid=(r+l)/2;
        if(a[mid]==x)
        {
            return true;
        }
        if(a[mid]<x)
        {
            r=mid+1;
        }
        else
        {
            l=mid-1;
        }
    }
    return false;
}

void gaseste(int a[100][100],int l,int c,int &xi,int &xj,int x)
{
    int j=0;
    for(int i=0;i<l;i++)
    {
        if(binarysearch2(a[i],c,x,j))
        {
            xi=i;
            xj=j;
        }
    }
}
