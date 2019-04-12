#include<iostream>
#include<cstring>
#include"StaticLinkList.h"

using namespace std;

void Sort(StaticLinkList S,int c)
{
    StaticLinkList Ssort;
    int Front[34];    //关键字队列头指针（位置）
    int Rear[34];    //关键字队列尾指针（位置）
    int i,j,k;
    char ch;
    for(i=0;i<MAXSIZE;i++)     //提取要排序的信息
    {
        for(j=0;j<7;j++)
            Ssort[i].data.plate[j]=S[i].data.plate[j];
        strcpy(Ssort[i].data.name,S[i].data.name);
        for(j=0;j<19;j++)
            Ssort[i].data.ID[j]=S[i].data.ID[j];
        strcpy(Ssort[i].data.car,S[i].data.car);
        Ssort[i].cur=S[i].cur;
    }
    for(i=0;i<6;i++)
    {
        for(k=0;k<34;k++)
        {
            Front[k]=0;
            Rear[k]=0;
        }
        j=0;
        k=1;
        while(k!=0)
        {
            ch=Ssort[j].data.plate[5-i];
            switch(ch)
            {
                case '0':
                    if(Front[0]==0)
                        Front[0]=j;
                    else
                        Ssort[Rear[0]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[0]=j;
                    break;
                case '1':
                    if(Front[1]==0)
                        Front[1]=j;
                    else
                        Ssort[Rear[1]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[1]=j;
                    break;
                case '2':
                    if(Front[2]==0)
                        Front[2]=j;
                    else
                        Ssort[Rear[2]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[2]=j;
                    break;
                case '3':
                    if(Front[3]==0)
                        Front[3]=j;
                    else
                        Ssort[Rear[3]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[3]=j;
                    break;
                case '4':
                    if(Front[4]==0)
                        Front[4]=j;
                    else
                        Ssort[Rear[4]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[4]=j;
                    break;
                case '5':
                    if(Front[5]==0)
                        Front[5]=j;
                    else
                        Ssort[Rear[5]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[5]=j;
                    break;
                case '6':
                    if(Front[6]==0)
                        Front[6]=j;
                    else
                        Ssort[Rear[6]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[6]=j;
                    break;
                case '7':
                    if(Front[7]==0)
                        Front[7]=j;
                    else
                        Ssort[Rear[7]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[7]=j;
                    break;
                case '8':
                    if(Front[8]==0)
                        Front[8]=j;
                    else
                        Ssort[Rear[8]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[8]=j;
                    break;
                case '9':
                    if(Front[9]==0)
                        Front[9]=j;
                    else
                        Ssort[Rear[9]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[9]=j;
                    break;
                case 'A':
                    if(Front[10]==0)
                        Front[10]=j;
                    else
                        Ssort[Rear[10]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[10]=j;
                    break;
                case 'B':
                    if(Front[11]==0)
                        Front[11]=j;
                    else
                        Ssort[Rear[11]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[11]=j;
                    break;
                case 'C':
                    if(Front[12]==0)
                        Front[12]=j;
                    else
                        Ssort[Rear[12]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[12]=j;
                    break;
                case 'D':
                    if(Front[13]==0)
                        Front[13]=j;
                    else
                        Ssort[Rear[13]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[13]=j;
                    break;
                case 'E':
                    if(Front[14]==0)
                        Front[14]=j;
                    else
                        Ssort[Rear[14]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[14]=j;
                    break;
                case 'F':
                    if(Front[15]==0)
                        Front[15]=j;
                    else
                        Ssort[Rear[15]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[15]=j;
                    break;
                case 'G':
                    if(Front[16]==0)
                        Front[16]=j;
                    else
                        Ssort[Rear[16]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[16]=j;
                    break;
                case 'H':
                    if(Front[17]==0)
                        Front[17]=j;
                    else
                        Ssort[Rear[17]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[17]=j;
                    break;
                case 'J':
                    if(Front[18]==0)
                        Front[18]=j;
                    else
                        Ssort[Rear[18]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[18]=j;
                    break;
                case 'K':
                    if(Front[19]==0)
                        Front[19]=j;
                    else
                        Ssort[Rear[19]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[19]=j;
                    break;
                case 'L':
                    if(Front[20]==0)
                        Front[20]=j;
                    else
                        Ssort[Rear[20]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[20]=j;
                    break;
                case 'M':
                    if(Front[21]==0)
                        Front[21]=j;
                    else
                        Ssort[Rear[21]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[21]=j;
                    break;
                case 'N':
                    if(Front[22]==0)
                        Front[22]=j;
                    else
                        Ssort[Rear[22]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[22]=j;
                    break;
                case 'P':
                    if(Front[23]==0)
                        Front[23]=j;
                    else
                        Ssort[Rear[23]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[23]=j;
                    break;
                case 'Q':
                    if(Front[24]==0)
                        Front[24]=j;
                    else
                        Ssort[Rear[24]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[24]=j;
                    break;
                case 'R':
                    if(Front[25]==0)
                        Front[25]=j;
                    else
                        Ssort[Rear[25]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[25]=j;
                    break;
                case 'S':
                    if(Front[26]==0)
                        Front[26]=j;
                    else
                        Ssort[Rear[26]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[26]=j;
                    break;
                case 'T':
                    if(Front[27]==0)
                        Front[27]=j;
                    else
                        Ssort[Rear[27]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[27]=j;
                    break;
                case 'U':
                    if(Front[28]==0)
                        Front[28]=j;
                    else
                        Ssort[Rear[28]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[28]=j;
                    break;
                case 'V':
                    if(Front[29]==0)
                        Front[29]=j;
                    else
                        Ssort[Rear[29]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[29]=j;
                    break;
                case 'W':
                    if(Front[30]==0)
                        Front[30]=j;
                    else
                        Ssort[Rear[30]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[30]=j;
                    break;
                case 'X':
                    if(Front[31]==0)
                        Front[31]=j;
                    else
                        Ssort[Rear[31]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[31]=j;
                    break;
                case 'Y':
                    if(Front[32]==0)
                        Front[32]=j;
                    else
                        Ssort[Rear[32]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[32]=j;
                    break;
                case 'Z':
                    if(Front[33]==0)
                        Front[33]=j;
                    else
                        Ssort[Rear[33]].cur=j;
                    k=Ssort[j].cur;
                    Ssort[j].cur=0;
                    Rear[33]=j;
                    break;
            }
            j=k;
        }
        j=0;
        while(Front[j]==0)
        {
            j++;
        }
        Ssort[0].cur=Front[j];
        k=j;
        j++;
        for(;j<34;j++)
        {
            if(Front[j]!=0)
            {
                Ssort[Rear[k]].cur=Front[j];
                k=j;
            }
        }
    }
    k=0;
    S[k].cur=1;
    k++;
    i=0;
    i=Ssort[i].cur;
    while(i!=0)//将排序后的链表返回
    {
        for(j=0;j<7;j++)
            S[k].data.plate[j]=Ssort[i].data.plate[j];
        strcpy(S[k].data.name,Ssort[i].data.name);
        for(j=0;j<19;j++)
            S[k].data.ID[j]=Ssort[i].data.ID[j];
        strcpy(S[k].data.car,Ssort[i].data.car);
        S[k].cur=k+1;
        k++;
        i=Ssort[i].cur;
    }
    S[c].cur=0;
}
