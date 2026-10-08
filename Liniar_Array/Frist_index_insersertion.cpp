#include <iostream>
using namespace std;
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int n = 5;
    int value ;
    cin>> value; 
    for(int i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = value;
    n++;
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
