#include "redblack_tree.h"
void redblack_Tree::move_to(node *a,node *b)
{
    if (b->parent==NIL) root=a;
    else
    {
        if (b->parent->lchild==b)
            b->parent->lchild=a;
        else b->parent->rchild=a;
    }
    a->parent=b->parent;
}
void redblack_Tree::leftrotate(node * now)
{
    if (now->rchild==NIL) return;//无右孩子无法左旋
    node *temp=now->rchild;//记录下当前的右孩子
    /* 用记录节点的左孩子替当前节点的右孩子*/
    if (temp->lchild!=NIL)
        temp->lchild->parent=now;
    now->rchild=temp->lchild;
    /********************************/
    /* 当前节点的双亲关系移植给记录节点 */
    if (now==root)
        root=temp;
    else if (now->parent->lchild==now)
        now->parent->lchild=temp;
    else
        now->parent->rchild=temp;
    temp->parent=now->parent;
    /*******************************/
    /* 当前节点成为记录节点的左孩子 */
    temp->lchild=now;
    now->parent=temp;
}
void redblack_Tree::rightrotate(node *now)
{
    if (now->lchild==NIL) return;
    node *temp=now->lchild;
    if (temp->rchild!=NIL)
        temp->rchild->parent=now;
    now->lchild=temp->rchild;
    if (now==root)
        root=temp;
    else if (now->parent->lchild==now)
        now->parent->lchild=temp;
    else
        now->parent->rchild=temp;
    temp->parent=now->parent;
    temp->rchild=now;
    now->parent=temp;
}
void redblack_Tree::insert_modify(node *now)
{
    while (now->parent->color==red)//只要当前节点的父节点是红色就持续修正
    {
        node *uncle;
        if (now->parent->parent->lchild==now->parent)//确定叔叔节点
            uncle=now->parent->parent->rchild;
        else uncle=now->parent->parent->lchild;
        if (uncle->color==red)//叔叔节点为红色，将父亲节点和叔叔节点变为黑色，祖父节点变为红色，当前节点移至祖父节点
        {
            now->parent->color=black;
            uncle->color=black;
            uncle->parent->color=red;
            now=uncle->parent;
        }
        else
        {
            if (now==now->parent->rchild)//叔叔节点为黑色，且前节点为右孩子，转移当前节点为父亲节点，并左旋
            {
                now=now->parent;
                leftrotate(now);
            }
            else//当前节点为右孩子，父亲节点变为黑色，祖父节点变为红色，父亲节点为右孩子则左旋付清节点，否则右旋父亲节点
            {
                now->parent->color=black;
                now->parent->parent->color=red;
                if (now->parent->parent->rchild==now->parent)leftrotate(now->parent->parent);
                else rightrotate(now->parent->parent);
            }
        }
    }
    root->color=black;//根节点保持黑色
}
void redblack_Tree::delete_modify(node *now)
{
    node *brother;
    while (now->color!=red&&now!=root) //当前节点为黑色且不为根节点则持续操作
    {
        if (now->parent->lchild==now)//若当前节点为右孩子则进行如下操作
        {
            brother=now->parent->rchild;
            if (brother->color==red)//兄弟节点为红色则改其为黑色，并让父亲节点变为红色，左旋父亲节点，之后重置父亲节点
            {
                brother->color=black;
                now->parent->color=red;
                leftrotate(now->parent);
                brother=now->parent->rchild;
            }
            else
            {
                if (brother->lchild->color==black&&brother->rchild->color==black)//兄弟节点的左右孩子均为黑色则令兄弟节点变为红色，当前节点移位父亲节点
                {
                    brother->color=red;
                    now=now->parent;
                }
                else
                {
                    if(brother->lchild->color==red&&brother->rchild->color==black)//兄弟节点的左孩子为红色，右孩子为黑色则将其变换为兄弟节点的右孩子为红色的情况
                    {
                        brother->lchild->color=black;
                        brother->color=red;
                        rightrotate(brother);
                        brother=now->parent->rchild;
                    }
                    brother->color=now->parent->color;
                    now->parent->color=black;
                    brother->rchild->color=black;
                    leftrotate(now->parent);
                    now=root;
                }
            }
        }
        else//若为左孩子则旋转方向相反
        {
            brother=now->parent->lchild;
            if (brother->color==red)
            {
                brother->color=black;
                now->parent->color=red;
                rightrotate(now->parent);
                brother=now->parent->lchild;
            }
            else
            {
                if (brother->rchild->color==black&&brother->lchild->color==black)
                {
                    brother->color=red;
                    now=now->parent;
                }
                else
                {
                    if (brother->rchild->color==red&&brother->lchild->color==black)
                    {
                        brother->rchild->color=black;
                        brother->color=red;
                        leftrotate(brother);
                        brother=now->parent->lchild;
                    }
                    brother->color=now->parent->color;
                    now->parent->color=black;
                    brother->lchild->color=black;
                    rightrotate(now->parent);
                    now=root;
                }
            }
        }
    }
    now->color=black;
    root->color=black;
}
redblack_Tree::redblack_Tree()
{
    Size=0;
    node *_NULL=new(node);
    _NULL->key=NONE;
    _NULL->lchild=NULL;
    _NULL->rchild=NULL;
    _NULL->parent=NULL;
    _NULL->color=black;
    root=NIL=_NULL;
}
void redblack_Tree::RBtree_insert(int key)
{
    Size++;
    node *temp=new(node);
    temp->key=key;
    temp->lchild=NIL;
    temp->rchild=NIL;
    temp->color=red;
    node *now=root;
    node *parent=NIL;
    while (now!=NIL)
    {
        parent =now;
        if (now->key>temp->key)
            now=now->lchild;
        else now=now->rchild;
    }
    temp->parent=parent;
    if (parent==NIL) root=temp;
    else if (parent->key>temp->key)
        parent->lchild=temp;
    else
        parent->rchild=temp;
    insert_modify(temp);
}
bool redblack_Tree::RBtree_delete(int key)
{
    node *now=RBtree_find(key);
    if (now==NIL) return false;
    node *temp;
    Size--;
    COLOR color=now->color;
    if (now->lchild==NIL)
    {
        temp=now->rchild;
        temp->parent=now;
        move_to(temp,now);
        if (color==black)delete_modify(temp);
    }
    else if (now->rchild==NIL)
    {
        temp=now->lchild;
        temp->parent=now;
        move_to(temp,now);
        if (color==black)delete_modify(temp);
    }
    else
    {
        temp=now->lchild;
        while (temp->rchild!=NIL)
            temp=temp->rchild;
        if (temp->parent==now)
        {
            move_to(temp,now);
            color=temp->color;
            temp->rchild=now->rchild;
            now->rchild->parent=temp;
            temp->color=now->color;
            temp->lchild->parent=temp;
            if (color==black)delete_modify(temp->lchild);
        }
        else
        {
            node *t=temp->lchild;
            move_to(temp->lchild,temp);
            move_to(temp,now);
            temp->lchild=now->lchild;
            temp->rchild=now->rchild;
            now->lchild->parent=temp;
            now->rchild->parent=temp;
            color=temp->color;
            temp->color=now->color;
            if (color==black) delete_modify(t);
        }
    }
    delete(now);
    return true;
}
node* redblack_Tree::RBtree_find(int key)
{
    node *now=root;
    while (now!=NIL)
    {
        if (now->key<key)
            now=now->rchild;
        if (now->key>key)
            now=now->lchild;
        if (now->key==key)
            return now;
    }
    return NIL;
}
