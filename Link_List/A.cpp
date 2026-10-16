#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class list
{
    node* head ;
    node* tell ;

public:

    list()
    {
        head = tell = NULL;
    }
    
    void push_front(int val)
    {
        node* newNode = new node(val);
        
        if(head == NULL)
        {
            head = tell = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
       
    }

    void display()
    {
        node* temp = head;
        while(temp != NULL)
        {
            cout<< temp->data << " -> " ;
            temp = temp->next ;
        }
        cout<< " NULL " ;
    }

    void push_back( int val)
    {
        node* newNode = new node(val);
        if(head == NULL)
        {
            tell->next = newNode;
            tell = newNode;
        }
        else
        {
            
        }
    }
};

int main()
{
    list A;
    A.push_front(2); 
    A.push_front(1);
    cout<< "after push_front the link list : " ;
    A.display();
}