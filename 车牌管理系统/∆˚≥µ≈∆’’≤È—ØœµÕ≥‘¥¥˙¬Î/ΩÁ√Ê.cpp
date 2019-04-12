#include<iostream>

using  namespace std;

void Space(int n)//输出空格
{
    int i;
    for(i=0;i<n;i++)
        cout<<" ";
}

void Line()
{
    cout<<"--------------------------------------------------------------"<<endl;
}

/*效果图

                    辽宁省汽车牌照查询系统
--------------------------------------------------------------

*/

void Header_main()//输出主界面表头
{
    Space(20);
    cout<<"辽宁省汽车牌照查询系统"<<endl;
    Line();
    cout<<endl;
}

/*效果图
|
|                    1   汽车牌照信息查询
|
|                    2   汽车车牌号码选择
|
|                    0   退出
|
|
|
|
|                    9   管理员更新系统信息
|

--------------------------------------------------------------
*/

void Main_interfasce()//输出主界面
{
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(20);
    cout<<"1   汽车牌照信息查询";
    Space(20);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(20);
    cout<<"2   汽车车牌号码选择";
    Space(20);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(20);
    cout<<"0   退出            ";
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
    cout<<"9   管理员更新系统信息";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    Line();
    cout<<endl;
}

/*效果图

                       汽车牌照信息查询
--------------------------------------------------------------

*/

void Header_query()//输出汽车牌照信息查询表头
{
    Space(23);
    cout<<"汽车牌照信息查询"<<endl;
    Line();
    cout<<endl;
}

/*效果图

                       汽车车牌号码选择
--------------------------------------------------------------

*/

void Header_choose()//输出汽车车牌号码选择表头
{
    Space(23);
    cout<<"汽车车牌号码选择"<<endl;
    Line();
    cout<<endl;
}

/*效果图

                      管理员更新系统信息
--------------------------------------------------------------

*/

void Header_administrator()//输出管理员更新系统信息表头
{
    Space(22);
    cout<<"管理员更新系统信息"<<endl;
    Line();
    cout<<endl;
}

/*效果图
|                                                            |
|                                                            |
|                  1   屏幕录入汽车牌照信息                  |
|                  2   文件录入汽车牌照信息                  |
|                  3   修改系统文件储存信息                  |
|                  4   删除系统文件储存信息                  |
|                  5   显示系统文件信息                      |
|                  6   系统储存文件信息备份                  |
|                  7   重置系统储存文件                      |
|                  8   修改管理员密码                        |
|                  0   返回主界面                            |
|                                                            |
|                                                            |
--------------------------------------------------------------
*/

void Administrator_interfasce()//输出理员更新系统信息界面
{
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"1   屏幕录入汽车牌照信息";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"2   文件录入汽车牌照信息";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"3   修改系统文件储存信息";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"4   删除系统文件储存信息";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"5   显示系统文件信息";
    Space(22);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"6   系统储存文件信息备份";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"7   重置系统储存文件";
    Space(22);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"8   修改管理员密码";
    Space(24);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"0   返回主界面";
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
