#include<iostream>  
using namespace std;
int main()
{
    cout<< "whice value want to insertion frist index: " ;
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

    // Shift Element to Right
    for(int i = n; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
     
    arr[0] = value;
    n = n + 1;

    cout << "print the new array" <<endl;
    for(int i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
