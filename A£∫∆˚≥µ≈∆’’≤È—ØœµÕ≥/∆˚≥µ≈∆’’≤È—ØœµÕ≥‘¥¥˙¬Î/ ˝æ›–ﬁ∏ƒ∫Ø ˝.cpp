#include<iostream>
#include<cstdio>
#include<conio.h>
#include<cstdlib>
#include"StaticLinkList.h"
#include"Input.h"
#include"Other.h"

using namespace std;

ElemType Revise(ElemType elem)
{
    int i=0,j;
    printf("\n\n��ѡ��Ҫ�޸ĵ���Ϣ\n");
    printf("1.���ƺ���\n");
    printf("2.��������\n");
    printf("3.�������֤��\n");
    printf("4.����Ʒ���Լ��ͺ�\n");
    printf("0.��ȫ��ȷ�����޸�n");
    printf("��ѡ��\n");
    scanf("%d",&j);
    while(j<0||j>5)
    {
        printf("�����ѡ����ȷӴ~\n\n��ѡ��1��2��3��4��0����\n��ѡ��\n");
        scanf("%d",&j);
    }
    system("cls");
    Header_administrator();
    if(j!=0)
        printf("�������µ���Ϣ\n");
    switch(j)
    {
        case 1:elem=Input_plate(elem,9);break;
        case 2:elem=Input_name(elem);break;
        case 3:elem=Input_ID(elem);break;
        case 4:elem=Input_car(elem);break;
        case 0:i=1;printf("û���޸���Ϣ\n");break;
    }
    if(i!=1)
    {
        printf("��Ϣ�޸ĳɹ�\n");
        i=0;
    }
    system("pause");
    return elem;
}
