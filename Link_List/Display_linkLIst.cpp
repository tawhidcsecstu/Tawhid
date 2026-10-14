#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node *add;
} *start, *temp, *new1;

void creat()
{
    int n;

   cout<<"frist element number: ";
   cin>> n;

   start = (struct node*) malloc(sizeof(struct node)); 

   start->data = n;
   start->add = NULL;

   temp = start;

   char ch;
   cout<<"Do you wante to creat new nod?(y/n)= ";
   cin>> ch;
   while(ch == 'y' || ch =='Y')
   {
        int a;
        cout<<"enter the data for new node = ";
        cin>> a;

        new1 = (struct node*) malloc(sizeof(struct node));

        new1->data = a;
        new1->add = NULL;

        temp->add = new1;
        temp = temp->add;
        
        cout<<"you want to creat new node?(y/n)= ";
        cin>>ch;
   }
}
void display()
{
    temp = start;
    
    cout<<"\nLink list output: ";

    while(temp != NULL)
    {
        cout<< temp->data << "->";
        temp = temp->add;
    }
    
    cout<< " NULL " << endl;
}

int main()
{
    creat();
    display();
}