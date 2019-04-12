#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    k=0;
    ui->setupUi(this);
    connect(ui->submit,SIGNAL(clicked(bool)),this,SLOT(Onclicked()));
    connect(ui->submit,SIGNAL(returnPressed()),this,SLOT(Onclicked()));
}
bool MainWindow::isDigit(QString key)
{
    std::string k1=key.toStdString();
    if (k1.size()==0) return false;
    for (int i=0;i<k1.size();i++)
        if (k1[i]<'0'||k1[i]>'9') return false;
    return true;
}
MainWindow::~MainWindow()
{
    delete ui;
}
int MainWindow::Onclicked()
{
    int index=ui->mode->currentIndex();
    QString m = ui->mode->itemText(index);
    QString key=ui->number->text();
    if (!MainWindow::isDigit(key))
    {
       QMessageBox t;
        t.warning(NULL,tr("输入错误！"),tr("请勿输入非数字！"),tr("好的(〃'▽'〃)"),tr("不会再犯了(*/ω＼*)"));
        return 0;
    }
    if (m=="insert") MainWindow::Oninsert(key.toInt());
    if (m=="delete") MainWindow::Ondelete(key.toInt());
    if (m=="find") MainWindow::Onfind(key.toInt());
    if (m=="modify") MainWindow::Onmodify(key.toInt());
    return 0;
}
int MainWindow::Oninsert(int key)
{
    if (MainWindow::rb.RBtree_find(key)!=MainWindow::rb.NIL)
    {
      QMessageBox t;
        t.warning(NULL,tr("错误！"),tr("重复插入学生！"),tr("好的(〃'▽'〃)"),tr("不会再犯了(*/ω\*)"));
        return 0;
    }
    student t;
    t={ui->grade->text(),ui->name->text(),ui->CLASS->text(),ui->sex->text()};
    if (((t.CLASS.size()==0)||(t.grade.size()==0)||(t.name.size()==0)||(t.sex.size()==0)))
    {
      QMessageBox t1;
        t1.warning(NULL,tr("错误！"),tr("信息没输入完全！"),tr("好的(〃'▽'〃)"),tr("不会再犯了(*/ω\*)"));
        k=0;
        return 0;
    }
    MainWindow::rb.RBtree_insert(key,t);
    QMessageBox t1;
    if (k==0) t1.information(NULL,tr("插入成功"),tr("插入成功！"),tr("好的(〃'▽'〃)"));
    k=0;
    ui->grade->clear();
    ui->name->clear();
    ui->CLASS->clear();
    ui->sex->clear();
    ui->number->clear();
    return 0;
}
int MainWindow::Ondelete(int key)
{
    if (!MainWindow::rb.RBtree_delete(key))
    {
        QMessageBox t;
        t.warning(NULL,tr("输入错误！"),tr("没有该学生！"), tr("好的(〃'▽'〃)"),tr("别烦我（╬￣皿￣）＝○＃（￣＃）３￣）"));
        k=0;
        return 0;
    };
    QMessageBox t1;
    if (k==0)
    {
        t1.information(NULL,tr("删除成功"),tr("删除成功！"),tr("好的(〃'▽'〃)"));
        ui->grade->clear();
        ui->name->clear();
        ui->CLASS->clear();
        ui->sex->clear();
        ui->number->clear();
    }
    k=0;
    return 1;
}
int MainWindow::Onfind(int key)
{
   node* temp;
   temp=rb.RBtree_find(key);
   if (temp==rb.NIL)
   {
       QMessageBox t;
       t.warning(NULL,tr("输入错误！"),tr("没有该学生！"), tr("好的(〃'▽'〃)"),tr("别烦我（╬￣皿￣）＝○＃（￣＃）３￣）"));
       return 0;
   }
   student t=temp->data;
   ui->grade->setText(t.grade);
   ui->CLASS->setText(t.CLASS);
   ui->sex->setText(t.sex);
   ui->name->setText(t.name);
   return 0;
}
int MainWindow::Onmodify(int key)
{
    k=1;
    if (!Ondelete(key)) return 0;
    k=1;
    Oninsert(key);
    QMessageBox t;
    t.information(NULL,tr("成功"),tr("修改成功！"), tr("好的(〃'▽'〃)"));
    ui->grade->clear();
    ui->name->clear();
    ui->CLASS->clear();
    ui->sex->clear();
    ui->number->clear();
    return 0;
}
