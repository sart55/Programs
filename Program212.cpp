#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{

    int data;
    struct node *next;
}

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class Singlyll()
{
public:

    PNODE First;

    Singlyll();

    void InsertFirst(int no);
    void InsertLast(no);
    void InsertAtPosition(int no,int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int iPos);

    void Display();
    void Count();


};

int main()
{
  Singlyll obj;


    return 0;
}

