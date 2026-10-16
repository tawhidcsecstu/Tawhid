#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class List
{

    node *head;
    node *tell;

public:
    List()
    {
        head = tell = NULL;
    }

    void push_front(int val)
    {
        node *newNode = new node(val);

        if (head == NULL)
        {
            head = tell = newNode;
        }

        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        node *newNode = new node(val);

        if (head == NULL)
        {
            head = tell = newNode;
        }
        else
        {
            tell->next = newNode;
            tell = tell->next;
        }
    }

    void pop_front()
    {
        node *temp = head;
        if (head == NULL)
        {
            cout << "\nLink list is empty";
        }
        else
        {
            head = head->next;
            temp = NULL;
            delete temp;
        }
    }

    void pop_back()
    {

        if (head == NULL)
        {
            cout << "the Link list is empty";
            return;
        }

        node *temp = head;

        while (temp->next != tell)
        {
            temp = temp->next;
        }

        temp->next = NULL;

        delete tell;

        tell = temp;
    }

    void insertion(int val, int position)
    {
        if (position < 0)
        {
            cout << "invalid position/n";
            return;
        }

        if (position == 0)
        {
            push_front(val);
            return;
        }

        node *temp = head;

        for (int i = 0; i < position - 1; i++)
        {
            temp = temp->next;
        }

        node *newNode = new node(val);

        newNode->next = temp->next;
        temp->next = newNode;
    }

    int seraching(int val)
    {
        node* temp = head;
        int indx = 0;

        while(temp != NULL)
        {
            if(temp->data == val)
            {
                return indx;
            }

            temp = temp->next;
            indx++;
        }

        return -1;

    }

    void printLL()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL " << endl;
    }
};

int main()
{
    List A;
    A.push_front(3);
    A.push_front(2);
    A.push_front(1);
    A.push_front(0);

    cout << " after push_front the link list :";

    A.printLL();

    A.push_back(5);
    A.push_back(6);
    A.push_back(7);
    A.push_back(8);

    cout << " after push_back the link list: ";
    A.printLL();

    A.pop_front();

    cout << " after pop_front the link list: ";
    A.printLL();

    A.pop_back();

    cout << " after pop_back the link list: ";
    A.printLL();

    cout << "after insertion the link list is: ";
    A.insertion(4, 3); // index is start 0;
    A.printLL();

    cout<< "sarching the value which is it index: " ;
    cout<< A.seraching(5);

    return 0;
}