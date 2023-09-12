#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        // Characteristics
        PNODE First;
        int iCount;

        // Behaviours
        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no ,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
};

/*
Return_Value Class_Name :: Function_Name(Parameters)
{

}
*/

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{
    PNODE newn = new NODE;

    newn->next = NULL;
    newn->data = no;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }

    else
    {
      newn->next = First;
      First = newn;
      iCount++;
    }
}

void SinglyLL :: InsertLast(int no)
{
     PNODE newn = new NODE;

    newn->next = NULL;
    newn->data = no;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }

    else
    {
      PNODE temp = First;
      while(temp->next != NULL)
      {
        temp = temp->next;
       
      }

         temp->next = newn;
         iCount++;
     }
}

void SinglyLL :: InsertAtPosition(int no, int ipos)
{
    PNODE newn = new NODE;
    PNODE temp = First;
    newn->data = no;
    newn->next = NULL;

    if((ipos < 1 )|| ipos > (iCount+1))
    {
        cout<<"Invalid Position"<<"\n";
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == (iCount+1))
    {
        InsertLast(no);
    }
    else
    {
        for(int iCnt = 1;iCnt < ipos-1; ipos++)
        {
          temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void SinglyLL :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {   
        delete First;
        First == NULL;
        iCount--;
    }
    else
    {
      PNODE temp = First;
      First = First->next;
      delete temp;
      iCount--;

    }
}

void SinglyLL :: DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {

        First == NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;
        while(temp->next->next != NULL)
        {
           temp = temp->next;
        }
        
        delete temp->next;
        temp->next = NULL;
        iCount--;
    }

}

void SinglyLL :: DeleteAtPosition(int iPos)
{
    PNODE temp = First;

    if(temp == NULL)
    {
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        for(int iCnt = 1;iCnt < iPos-1; iPos++)
        {
            temp = temp->next;
        }

        PNODE temp2 = temp->next;

        temp->next = temp->next->next;

        delete temp2;

        iCount--;



    }
}

void SinglyLL :: Display()
{
    cout<<"Elements of Linked List are : "<<"\n";
    PNODE temp = First;

    while (temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}

int main()
{
    SinglyLL obj1;
    
    cout<<sizeof(obj1)<<"\n";
    cout<<"First pointer contains : "<<obj1.First<<"\n";
    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

        obj1.Display();
    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);

    obj1.Display();

    obj1.DeleteFirst();
    obj1.Display();

    obj1.DeleteLast();
    obj1.Display();

    obj1.InsertAtPosition(10,1);
    obj1.Display();

    obj1.DeleteAtPosition(2);
    obj1.Display();

    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    return 0;
}