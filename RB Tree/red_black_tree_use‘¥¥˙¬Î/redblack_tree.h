#ifndef REDBLACK_TREE_H
#define REDBLACK_TREE_H
#define NONE 0
#define OK 1
#include<iostream>
#include<queue>
#include<QMainWindow>
enum COLOR {red,black};
class student
{
public:
    QString grade,name,CLASS,sex;
};
struct node
{
    int key;
    node *lchild,*rchild,*parent;
    COLOR color;
    student data;
};
class redblack_Tree
{
public:
    node *root;
    node *NIL;
    int Size;
    redblack_Tree();
    void RBtree_insert(int key,student data);
    bool RBtree_delete(int key);
    node* RBtree_find(int key);
private:
    void move_to(node *a,node *b);
    void leftrotate(node * now);
    void rightrotate(node * now);
    void insert_modify(node *now);
    void delete_modify(node *now);
};

#endif // REDBLACK_TREE_H
