#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<conio.h>
#include"StaticLinkList.h"
#include"Choice.h"
#include<stdio.h>

using namespace std;

void Choose(StaticLinkList S,int c)
{
    ElemType Test;
    int t=1;
    int i,j,k,z;
    char ch,th;
    while(t==1)
    {
        system("cls");
        Header_choose();
        printf("选择汽车所在城市：\n");
        cout<<'\t'<<"1   沈阳市"<<'\t'<<"2   大连市"<<'\t'<<"3   鞍山市"<<endl;
        cout<<'\t'<<"4   抚顺市"<<'\t'<<"5   本溪市"<<'\t'<<"6   丹东市"<<endl;
        cout<<'\t'<<"7   锦州市"<<'\t'<<"8   营口市"<<'\t'<<"9   阜新市"<<endl;
        cout<<'\t'<<"10  辽阳市"<<'\t'<<"11  盘锦市"<<'\t'<<"12  铁岭市"<<endl;
        cout<<'\t'<<"13  朝阳市"<<'\t'<<"14  葫芦岛市"<<endl;
        cout<<endl<<'\t'<<"0   返回主菜单"<<endl;
        printf("\t0   返回主菜单\n");
        printf("\n");
        Line();
        printf("请选择：\n");
        scanf("%d",&k);
        while(k<0||k>14)
        {
            printf("输入的选择不正确！\n");
            printf("请选择1~14或者0\n");
            printf("请选择：\n");
            scanf("%d",&k);
        }
        switch(k)
        {
            case 1:th='A';break;
            case 2:th='B';break;
            case 3:th='C';break;
            case 4:th='D';break;
            case 5:th='E';break;
            case 6:th='F';break;
            case 7:th='G';break;
            case 8:th='H';break;
            case 9:th='J';break;
            case 10:th='K';break;
            case 11:th='L';break;
            case 12:th='M';break;
            case 13:th='N';break;
            case 14:th='P';break;
            case 0:t=0;break;
        }
        if(k!=0)
        {
            j=0;
            while(j==0)//接收要选择的车牌号码
            {
                system("cls");
                Header_choose();
                for(i=0;i<6;i++)
                    Test.plate[i]='O';
                Test.plate[6]='\0';
                cout<<"请输入你想选择的汽车车牌号码："<<endl;
                printf("辽%c",th);
                Test.plate[0]=th;
                i=1;
                while((ch=getch())!='\r')
                {
                    if(ch=='\b')
                    {
                        if(i>1)
                        {
                            i--;
                            printf("\b \b");// 退格的实现
                            Test.plate[i+1]='O';
                        }
                        else
                            putchar(7);
                    }
                    else
                    {
                        if(i!=6)
                        {
                            if((ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
                            {
                                Test.plate[i++]=ch;
                                cout<<ch;
                            }
                            else putchar(7);
                        }
                    }
                }
                Test.plate[6]='\0';
                j=1;
                z=0;
                for(i=0;i<6;i++)
                {
                    ch=Test.plate[i];
                    if(i==0)
                    {
                        if(ch>='A'&&ch<='P'&&ch!='I'&&ch!='O') j=j;
                        else j=0;
                    }
                    if(i>0&&i<5)
                    {
                        if(ch>='A'&&ch<='Z'&&ch!='I'&&ch!='O')
                        {
                            j=j;
                            z++;
                        }
                        else if(ch>='0'&&ch<='9') j=j;
                        else j=0;
                    }
                    if(i==5)
                    {
                        if(ch>='0'&&ch<='9') j=j;
                        else j=0;
                    }
                    if(z>2) j=0;
                }
                if(j==0)
                {
                    printf("输入的车牌号不符合规定！\n");
                    printf("注意：辽宁省车牌样式为\"辽XXXXXX\"\n");
                    printf("其中第一位为A,B,C,D,E,F,G,H,J,K,L,M,N,P,代表14个地区\n");
                    printf("第二位到第五为除I和O外的24个大写英文字母以及0~9数字组成，\n");
                    printf("但英文字母不能超过2个\n");
                    printf("最后一位为只能是0~9的数字\n");
                    printf("请重新输入车牌号!\n");
                    system("pause");
                }
            }
            system("cls");
            Header_choose();
            printf("\n");
            Space(20);
            printf("车牌号码查找中...\n");
            printf("\n");
            Line();
            if(!Search_Block(S,c,Test,th))
            {
                system("cls");
                Header_choose();
                printf("\n");
                Space(5);
                cout<<"恭喜您！车牌号码 辽"<<Test.plate<<"可以使用！"<<endl;
                printf("\n");
                Line();
            }
            else
            {
                system("cls");
                Header_choose();
                printf("\n");
                Space(5);
                cout<<"非常抱歉！车牌号码 辽"<<Test.plate<<"已被他人使用！"<<endl;
                printf("\n");
                Line();
            }
        }
        if(k!=0)
        {
            printf("选择：1.\t继续选择\t\t0.\t返回主界面\n");
            printf("请选择：\n");
            scanf("%d",&t);
            while(t!=0&&t!=1)
            {
                printf("输入的选择不正确！\n");
                printf("选择：1.\t继续选择\t\t0.\t返回主界面\n");
                printf("请选择：\n");
                scanf("%d",&t);
            }
        }
    }
    system("cls");
    Header_choose();
    printf("\n");
    Space(20);
    printf("即将返回主菜单！\n");
    printf("\n");
    Line();
    system("pause");
}
