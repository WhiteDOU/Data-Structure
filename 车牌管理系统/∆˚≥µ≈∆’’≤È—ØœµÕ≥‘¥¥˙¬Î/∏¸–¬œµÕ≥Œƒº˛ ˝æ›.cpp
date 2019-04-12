#include<iostream>


using namespace std;

/*int Enter_screen(StaticLinkList S,int c)
{
    ElemType elem;
    StaticLinkList Extra;
    char file[100];
    int e=0;
    int i;
    int j=0;
    char str[10]={"0"};
    for(i=0;i<MAXSIZE;i++)
    {
        for(j=0;j<6;j++)
            Extra[i].data.plate[j]='0';
        Extra[i].data.plate[6]='\0';
        strcpy(Extra[i].data.name,str);
        for(j=0;j<18;j++)
            Extra[i].data.ID[j]='0';
        Extra[i].data.ID[18]='\0';
        strcpy(Extra[i].data.car,str);
        Extra[i].cur=i+1;
    }
    i=1;
    while(i==1)
    {
        if(j==1) system("cls");
        cout<<"录入车辆牌照信息："<<endl;
        elem=ScreenInput(elem);
        S[c].cur=c+1;
        c++;
        strcpy(S[c].data.plate,elem.plate);
        strcpy(S[c].data.name,elem.name);
        strcpy(S[c].data.ID,elem.ID);
        strcpy(S[c].data.car,elem.car);
        S[c].cur=0;
        Extra[e].cur=e+1;
        e++;
        strcpy(Extra[e].data.plate,elem.plate);
        strcpy(Extra[e].data.name,elem.name);
        strcpy(Extra[e].data.ID,elem.ID);
        strcpy(Extra[e].data.car,elem.car);
        Extra[e].cur=0;
        system("cls");
        cout<<"信息录入成功"<<endl;
        cout<<"是否继续录入车辆牌照信息？"<<endl;
        cout<<"1继续录入"<<'\t'<<"0退出"<<endl;
        cout<<"请选择：";
        cin>>i;
        while(i!=0&&i!=1)
        {
            cout<<"输入的选择不正确!"<<endl;
            cout<<"是否继续录入车辆牌照信息？"<<endl;
            cout<<"1继续录入"<<'\t'<<"0退出"<<endl;
            cout<<"请选择：";
            cin>>i;
        }
        j=i;
    }
    system("cls");
    cout<<"对新录入的汽车牌照信息是否备份？"<<endl;
    cout<<"1：备份"<<'\t'<<"0：不备份"<<endl<<"请选择：";
    cin>>i;
    while(i!=1&&i!=0)
    {
        cout<<"输入的选择不正确！"<<endl<<"请选择1：备份或者0：不备份"<<endl<<"请选择：";
        cin>>i;
    }
    if(i==1)
    {
        system("cls");
        ofstream fout;
        cout<<"对新录入的汽车牌照信息进行备份！"<<endl;
        cout<<"请输入文件路径：";
        cin>>file;
        fout.open(file,ios::out);
        while(fout.fail())
        {
            cout<<"文件打开失败！"<<endl;
            cout<<"请输入正确的文件路径：";
            cin>>file;
            fout.open(file,ios::out);
        }
        fout<<e<<" ";
        for(i=0;i<MAXSIZE;i++)
        {
            fout<<Extra[i].data.plate<<" "<<Extra[i].data.name<<" "<<Extra[i].data.ID<<" "<<Extra[i].data.car<<" "<<Extra[i].cur<<" ";
        }
        fout.close();
        system("cls");
        cout<<"新汽车牌照信息成功备份！"<<endl;
        system("pause");
    }
    system("cls");
    Store(S,c);
    cout<<"新汽车牌照信息成功录入到系统文件！"<<endl;
    system("pause");
    return c;
}*/

