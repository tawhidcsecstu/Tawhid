#include<iostream>
using namespace std;

class node
{
public:

    int data;
    node *pre;
    node *next;

    node(int data)
    {
        this->data = data;
    }

};

class dubliolinklist
{
public:

    node *head = NULL;
    node *tell = NULL;

public:

    void insertion()
    {
        int n, data;
        cout << "How many node you want: ";
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            cout << "Enter the data: ";
            cin >> data;

            node *newNode = new node(data);

            if(head == NULL)
            {
                head = newNode;
                tell = newNode;
            }
            else
            {
                tell->next = newNode;
                newNode->pre = tell;
                tell = newNode;

            }
        }
    }

    void display()
    {

         node *ptr = head;

         while(ptr != NULL)
         {
               cout << ptr->data << "->" ;
               ptr = ptr->next;

         }
         cout << "NULL" << endl;
    }
};

int main()
{
    dubliolinklist list;

    list.insertion();

    list.display();


}
