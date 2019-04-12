#include<iostream>
#include<cstring>
#include"StaticLinkList.h"

using namespace std;

bool Search_Block(StaticLinkList S,int c,ElemType elem,char ch)
{
    StaticLinkList SBlock;
    int i,j,k;
    int block=0;
    char str[10]={"0"};
    for(i=0;i<MAXSIZE;i++)//初始化分块查找链表
    {
        for(j=0;j<6;j++)
            SBlock[i].data.plate[j]='0';
        SBlock[i].data.plate[6]='\0';
        strcpy(SBlock[i].data.name,str);
        for(j=0;j<18;j++)
            SBlock[i].data.ID[j]='0';
        SBlock[i].data.ID[18]='\0';
        strcpy(SBlock[i].data.car,str);
        SBlock[i].cur=i+1;
    }
    k=1;
    for(i=0;i<=c;i++)//提取索引信息
    {
        if(S[i].data.plate[0]==ch)
        {
            block++;
            for(j=0;j<6;j++)
                SBlock[k].data.plate[j]=S[i].data.plate[j];
            SBlock[k-1].cur=k;
            k++;
        }
    }
    k=0;
    i=1;
    while(k==0&&i<=block) //顺序查找
    {
        k=1;
        for(j=0;j<6;j++)
        {
            if(elem.plate[j]!=SBlock[i].data.plate[j])
                k=0;
        }
        i++;
    }
    if(k==1) return true;
    else return false;
}
