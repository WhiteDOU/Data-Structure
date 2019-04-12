#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "redblack_tree.h"
#include <QMessageBox>
#include "my_red.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void visit();
    bool isDigit(QString key);
private:
    Ui::MainWindow *ui;
    redblack_Tree rb;
    int Oninsert(int key);
    int Ondelete(int key);
private slots:
    int Onclicked();

};

#endif // MAINWINDOW_H
