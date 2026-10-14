#include<iostream>  
using namespace std;
int main()
{
    cout << ""



    cout<< "whice value want to insertion index: " ;
    int value;
    cin>> value;



    cout<< "Enter The Array" << endl;
    int arr[5];
    int n = 5;

    for(int i = 0; i < n; i++ )
    {
        cin >> arr[i];
    }

    cout << "Print The Array" << endl;
    for(int i = 0; i < n; i++ )
    {
        cout << arr[i] <<" ";
    }
    cout << endl;