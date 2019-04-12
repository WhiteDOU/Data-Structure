#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->frame->size=0;
    connect(ui->button,SIGNAL(clicked(bool)),this,SLOT(Onclicked()));
    connect(ui->text,SIGNAL(returnPressed()),this,SLOT(Onclicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
bool MainWindow::isDigit(QString key)
{
    std::string k1=key.toStdString();
    if (k1.size()==0) return false;
    for (int i=0;i<k1.size();i++)
        if ((k1[i]<'0'||k1[i]>'9')&&k1[i]!='-') return false;
    return true;
}
int MainWindow::Onclicked()
{
    int index=ui->mode->currentIndex();
    QString m = ui->mode->itemText(index);
    QString key=ui->text->text();
    if (!MainWindow::isDigit(key))
    {
       QMessageBox t;
        t.warning(NULL,tr("输入错误！"),tr("请勿输入非数字！"),tr("好的(〃'▽'〃)"),tr("不会再犯了(*/ω＼*)"));
        return 0;
    }
    if (m=="insert") MainWindow::Oninsert(key.toInt());
    if (m=="delete") MainWindow::Ondelete(key.toInt());
    return 0;
}
int MainWindow::Oninsert(int key)
{
    if (MainWindow::rb.RBtree_find(key)!=MainWindow::rb.NIL)
    {
      QMessageBox t;
        t.warning(NULL,tr("错误！"),tr("重复输入会导致故障！"),tr("好的(〃'▽'〃)"),tr("不会再犯了(*/ω\*)"));
        return 0;
    }
    MainWindow::rb.RBtree_insert(key);
    MainWindow::visit();
    return 0;
}
int MainWindow::Ondelete(int key)
{
    if (!MainWindow::rb.RBtree_delete(key))
    {
        QMessageBox t;
        t.warning(NULL,tr("输入错误！"),tr("并没有待删除的数！"), tr("好的(〃'▽'〃)"),tr("别烦我（╬￣皿￣）＝○＃（￣＃）３￣）"));
    };
    MainWindow::visit();
    return 0;
}
void MainWindow::visit()
{
        std::queue<node*> q;
        std::queue<int>pq;
        ui->frame->size=0;
        if (rb.root==rb.NIL)
        {
            ui->frame->update();
            return;
        }
        q.push(rb.root);
        pq.push(0);
        ui->frame->level[0]=0;
        while (q.size())
        {
            node *temp=q.front();
            int pos=pq.front();
            q.pop();
            pq.pop();
            int size=ui->frame->size;
            ui->frame->key[size]=temp->key;
            ui->frame->color[size]=temp->color;
            ui->frame->p[size]=pos;
            ui->frame->level[size]=ui->frame->level[pos]+1;
            if (temp->lchild!=rb.NIL) {q.push(temp->lchild);pq.push(size);}
            if (temp->rchild!=rb.NIL) {q.push(temp->rchild);pq.push(size);}
            ui->frame->size++;
        }
        ui->frame->update();
        return ;
   }
