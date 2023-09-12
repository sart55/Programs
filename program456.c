#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *lchild;
  struct node *rchild;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void Insert(PPNODE Root, int No)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));

  newn->data = No;
  newn->lchild = NULL;
  newn->rchild = NULL;
}
int main()
{
  PNODE Head = NULL;

  Insert(&Head , 11);
}


