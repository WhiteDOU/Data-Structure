#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "redblack_tree.h"
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    redblack_Tree rb;
    int Oninsert(int key);
    int Ondelete(int key);
    int Onfind(int key);
    int Onmodify(int key);
    bool isDigit(QString key);
    int k;
private:
    Ui::MainWindow *ui;
private slots:
    int Onclicked();
};

#endif // MAINWINDOW_H
