#ifndef REDBLACK_TREE_H
#define REDBLACK_TREE_H
#define NONE 0
#define OK 1
#include<iostream>
#include<queue>
enum COLOR {red,black};
struct node
{
    int key;
    node *lchild,*rchild,*parent;
    COLOR color;
};
class redblack_Tree
{
private:
    void move_to(node *a,node *b);
    void leftrotate(node * now);
    void rightrotate(node *now);
    void insert_modify(node *now);
    void delete_modify(node *now);
public:
    node *root;
    node *NIL;//NIL节点代替NULL便于操作
    int Size;
    redblack_Tree();
    void RBtree_insert(int key);
    bool RBtree_delete(int key);
    node* RBtree_find(int key);
};

#endif // REDBLACK_TREE_H
