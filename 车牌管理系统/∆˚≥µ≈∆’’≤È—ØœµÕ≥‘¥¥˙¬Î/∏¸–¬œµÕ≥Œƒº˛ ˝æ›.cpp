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
        cout<<"¼�복��������Ϣ��"<<endl;
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
        cout<<"��Ϣ¼��ɹ�"<<endl;
        cout<<"�Ƿ����¼�복��������Ϣ��"<<endl;
        cout<<"1����¼��"<<'\t'<<"0�˳�"<<endl;
        cout<<"��ѡ��";
        cin>>i;
        while(i!=0&&i!=1)
        {
            cout<<"�����ѡ����ȷ!"<<endl;
            cout<<"�Ƿ����¼�복��������Ϣ��"<<endl;
            cout<<"1����¼��"<<'\t'<<"0�˳�"<<endl;
            cout<<"��ѡ��";
            cin>>i;
        }
        j=i;
    }
    system("cls");
    cout<<"����¼�������������Ϣ�Ƿ񱸷ݣ�"<<endl;
    cout<<"1������"<<'\t'<<"0��������"<<endl<<"��ѡ��";
    cin>>i;
    while(i!=1&&i!=0)
    {
        cout<<"�����ѡ����ȷ��"<<endl<<"��ѡ��1�����ݻ���0��������"<<endl<<"��ѡ��";
        cin>>i;
    }
    if(i==1)
    {
        system("cls");
        ofstream fout;
        cout<<"����¼�������������Ϣ���б��ݣ�"<<endl;
        cout<<"�������ļ�·����";
        cin>>file;
        fout.open(file,ios::out);
        while(fout.fail())
        {
            cout<<"�ļ���ʧ�ܣ�"<<endl;
            cout<<"��������ȷ���ļ�·����";
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
        cout<<"������������Ϣ�ɹ����ݣ�"<<endl;
        system("pause");
    }
    system("cls");
    Store(S,c);
    cout<<"������������Ϣ�ɹ�¼�뵽ϵͳ�ļ���"<<endl;
    system("pause");
    return c;
}*/

