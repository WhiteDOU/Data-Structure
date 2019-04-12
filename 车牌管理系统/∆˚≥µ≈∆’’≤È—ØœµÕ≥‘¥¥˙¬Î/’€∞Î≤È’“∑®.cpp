#include<iostream>
#include<cstring>
#include"StaticLinkList.h"
ElemType Search_Binary(StaticLinkList S,int c,ElemType elem)
{
    int low,mid,high;
    int i=0;
    int j;
    low=1;
    high=c;
    mid=(low+high)/2;
    while((i==0)&&(low<=high))
    {
        j=0;
        while((S[mid].data.plate[j]==elem.plate[j])&&(j<6))
            j++;
        if(j==6) i=1;
        else
        {
            if(S[mid].data.plate[j]<elem.plate[j]) low=mid+1;
            else high=mid-1;
            mid=(low+high)/2;
        }
    }
    if(i==0)
    {
        for(j=0;j<7;j++)
        {
            elem.plate[j]=0;
        }
        return elem;
    }
    else
    {
        strcpy(elem.plate,S[mid].data.plate);
        strcpy(elem.name,S[mid].data.name);
        strcpy(elem.ID,S[mid].data.ID);
        strcpy(elem.car,S[mid].data.car);
        return elem;
    }
}

int Search_Binary_Admin(StaticLinkList S,int c,ElemType elem)
{
    int low,mid,high;
    int i=0;
    int j;
    low=1;
    high=c;
    mid=(low+high)/2;
    while((i==0)&&(low<=high))
    {
        j=0;
        while((S[mid].data.plate[j]==elem.plate[j])&&(j<6))
            j++;
        if(j==6) i=1;
        else
        {
            if(S[mid].data.plate[j]<elem.plate[j]) low=mid+1;
            else high=mid-1;
            mid=(low+high)/2;
        }
    }
    if(i==0)
        return 0;
    else
        return mid;
}
