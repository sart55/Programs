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
     
    //Characteristics
    PNODE First;
    int iCount;
    
    //Behaviour
    Singlyll();

    void InsertFirst(int no);
    void InsertLast(no);
    void InsertAtPosition(int no,int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int iPos);

    void Display();



};

int main()
{
  Singlyll obj1;
  Singlyll obj2;



    return 0;
}

