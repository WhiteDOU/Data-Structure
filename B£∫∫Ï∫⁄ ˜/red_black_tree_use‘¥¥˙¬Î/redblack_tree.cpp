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
    if (now->rchild==NIL) return; //没有右孩子无法左旋
    node *temp=now->rchild;
    if (temp->lchild!=NIL)
        temp->lchild->parent=now;
    now->rchild=temp->lchild;
    if (now==root)
        root=temp;
    else if (now->parent->lchild==now)
        now->parent->lchild=temp;
    else
        now->parent->rchild=temp;
    temp->parent=now->parent;
    temp->lchild=now;
    now->parent=temp;
}
void redblack_Tree::rightrotate(node * now)
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
    while (now->parent->color==red)
    {
        node *uncle;
        if (now->parent->parent->lchild==now->parent)
            uncle=now->parent->parent->rchild;
        else uncle=now->parent->parent->lchild;
        if (uncle->color==red)
        {
            now->parent->color=black;
            uncle->color=black;
            uncle->parent->color=red;
            now=uncle->parent;
        }
        else
        {
            if (now==now->parent->rchild)
            {
                now=now->parent;
                leftrotate(now);
            }
            else
            {
                now->parent->color=black;
                now->parent->parent->color=red;
                if (now->parent->parent->rchild==now->parent)leftrotate(now->parent->parent);
                else rightrotate(now->parent->parent);
            }
        }
    }
    root->color=black;
}
void redblack_Tree::delete_modify(node *now)
{
    node *brother;
    while (now->color!=red&&now!=root)
    {
        if (now->parent->lchild==now)
        {
            brother=now->parent->rchild;
            if (brother->color==red)
            {
                brother->color=black;
                now->parent->color=red;
                leftrotate(now->parent);
                brother=now->parent->rchild;
            }
            else
            {
                if (brother->lchild->color==black&&brother->rchild->color==black)
                {
                    brother->color=red;
                    now=now->parent;
                }
                else
                {
                    if(brother->lchild->color==red&&brother->rchild->color==black)
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
        else
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
void redblack_Tree::RBtree_insert(int key,student data)
{
    Size++;
    node *temp=new(node);
    temp->key=key;
    temp->lchild=NIL;
    temp->rchild=NIL;
    temp->color=red;
    temp->data=data;
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
