#include<iostream>

using  namespace std;

void Space(int n)//����ո�
{
    int i;
    for(i=0;i<n;i++)
        cout<<" ";
}

void Line()
{
    cout<<"--------------------------------------------------------------"<<endl;
}

/*Ч��ͼ

                    ����ʡ�������ղ�ѯϵͳ
--------------------------------------------------------------

*/

void Header_main()//����������ͷ
{
    Space(20);
    cout<<"����ʡ�������ղ�ѯϵͳ"<<endl;
    Line();
    cout<<endl;
}

/*Ч��ͼ
|
|                    1   ����������Ϣ��ѯ
|
|                    2   �������ƺ���ѡ��
|
|                    0   �˳�
|
|
|
|
|                    9   ����Ա����ϵͳ��Ϣ
|

--------------------------------------------------------------
*/

void Main_interfasce()//���������
{
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(20);
    cout<<"1   ����������Ϣ��ѯ";
    Space(20);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(20);
    cout<<"2   �������ƺ���ѡ��";
    Space(20);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(20);
    cout<<"0   �˳�            ";
    Space(20);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(20);
    cout<<"9   ����Ա����ϵͳ��Ϣ";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    Line();
    cout<<endl;
}

/*Ч��ͼ

                       ����������Ϣ��ѯ
--------------------------------------------------------------

*/

void Header_query()//�������������Ϣ��ѯ��ͷ
{
    Space(23);
    cout<<"����������Ϣ��ѯ"<<endl;
    Line();
    cout<<endl;
}

/*Ч��ͼ

                       �������ƺ���ѡ��
--------------------------------------------------------------

*/

void Header_choose()//����������ƺ���ѡ���ͷ
{
    Space(23);
    cout<<"�������ƺ���ѡ��"<<endl;
    Line();
    cout<<endl;
}

/*Ч��ͼ

                      ����Ա����ϵͳ��Ϣ
--------------------------------------------------------------

*/

void Header_administrator()//�������Ա����ϵͳ��Ϣ��ͷ
{
    Space(22);
    cout<<"����Ա����ϵͳ��Ϣ"<<endl;
    Line();
    cout<<endl;
}

/*Ч��ͼ
|                                                            |
|                                                            |
|                  1   ��Ļ¼������������Ϣ                  |
|                  2   �ļ�¼������������Ϣ                  |
|                  3   �޸�ϵͳ�ļ�������Ϣ                  |
|                  4   ɾ��ϵͳ�ļ�������Ϣ                  |
|                  5   ��ʾϵͳ�ļ���Ϣ                      |
|                  6   ϵͳ�����ļ���Ϣ����                  |
|                  7   ����ϵͳ�����ļ�                      |
|                  8   �޸Ĺ���Ա����                        |
|                  0   ����������                            |
|                                                            |
|                                                            |
--------------------------------------------------------------
*/

void Administrator_interfasce()//�����Ա����ϵͳ��Ϣ����
{
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"1   ��Ļ¼������������Ϣ";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"2   �ļ�¼������������Ϣ";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"3   �޸�ϵͳ�ļ�������Ϣ";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"4   ɾ��ϵͳ�ļ�������Ϣ";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"5   ��ʾϵͳ�ļ���Ϣ";
    Space(22);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"6   ϵͳ�����ļ���Ϣ����";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"7   ����ϵͳ�����ļ�";
    Space(22);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"8   �޸Ĺ���Ա����";
    Space(24);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"0   ����������";
    Space(28);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    Line();
    cout<<endl;
}
