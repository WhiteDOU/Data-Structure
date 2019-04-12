#include<iostream>
#include<cstdio>
#include<conio.h>
#include<cstdlib>
#include"StaticLinkList.h"
#include"Other.h"
#include<stdio.h>
using namespace std;

ElemType Input_plate(ElemType elem,int cls)
{
    int i;
    int j=0;
    int z=0;
    char ch;
    while(j==0)
    {
        for(i=0;i<6;i++)
        {
            elem.plate[i]='O';//初始化
        }
        elem.plate[6]='\0';
        i=0;
        if(z==100)
        {
            system("cls");
            if(cls==1)
                Header_query();
            else if(cls==2)
                Header_choose();
            else if(cls==9)
                Header_administrator();
        }
        printf("请输入车牌号：辽");
        while((ch=getch())!='\r')//保证车牌号码的格式
        {
            if(ch=='\b')
            {
                if(i>0)
                {
                    i--;
                    printf("\b \b");// 退格的实现
                    elem.plate[i+1]='O';
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
                            elem.plate[i++]=ch;
                            cout<<ch;
                        }
                        else putchar(7);
                    }
            }
        }
        elem.plate[6]='\0';
        j=1;
        z=0;
        for(i=0;i<6;i++)//检验输入的车牌号码是否符合实际情况
        {
            ch=elem.plate[i];
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
            printf("注意：辽宁省车牌样式为\"辽XXXXXX\\n");
            printf("其中第一位为A,B,C,D,E,F,G,H,J,K,L,M,N,P,代表14个地区\n");
            printf("第二位到第五为除I和O外的24个大写英文字母以及0~9数字组成，\n");
            printf("但英文字母不能超过2个\n");
            printf("最后一位为只能是0~9的数字\n");
            printf("请重新输入车牌号!\n");
            system("pause");
            z=100;
        }
    }
    return elem;
}

ElemType Input_name(ElemType elem)
{
    printf("\n车主姓名:\n");
    cin>>elem.name;
    return elem;
}

ElemType Input_ID(ElemType elem)
{
    int i;
    char ch;
    for(i=0;i<18;i++)
    {
        elem.ID[i]='a';
    }
    i=0;
    printf("\n车主身份证号：\n");
    while((ch=getch())!='\r')//保证身份证号码是18位的数字（最后一位可以是X）
    {
        if(ch=='\b')
        {
            if(i>0)
            {
                i--;
                printf("\b \b");// 退格的实现
                elem.ID[i+1]='\0';
            }
            else
                putchar(7);
        }
        else
        {
            if(i==17)
            {
                {
                    if((ch>='0'&&ch<='9')||ch=='X'||ch=='x')
                    {
                        if(ch=='X'||ch=='x')
                        {
                            elem.ID[i++]='X';
                            cout<<'X';
                        }
                        else
                        {
                            elem.ID[i++]=ch;
                            cout<<ch;
                        }
                    }
                    else putchar(7);
                }
            }
            if(i<17)
            {
                if(ch>='0'&&ch<='9')
                {
                    elem.ID[i++]=ch;
                    cout<<ch;
                }
                else putchar(7);
            }
        }
    }
    for(i=0;i<18;i++)
    {
        if(elem.ID[i]=='a')
        {
            printf("输入的不对\n");
            break;
        }
    }
    elem.ID[18]='\0';
    return elem;
}

ElemType Input_car(ElemType elem)
{
    printf("\n车辆品牌及型号：\n");
    cin>>elem.car;
    return elem;
}
