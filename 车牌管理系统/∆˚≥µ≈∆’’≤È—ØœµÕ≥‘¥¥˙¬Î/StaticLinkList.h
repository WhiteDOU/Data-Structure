#ifndef STATICLINKLIST_H_INCLUDED
#define STATICLINKLIST_H_INCLUDED

#define MAXSIZE 1000

typedef struct ElemType
{
    char plate[7];
    char name[20];
    char ID[19];
    char car[100];
}ElemType;

typedef struct Node
{
    ElemType data;
    int cur;
}StaticLinkList[MAXSIZE];

#endif // STATICLINKLIST_H_INCLUDED
