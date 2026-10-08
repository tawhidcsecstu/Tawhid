#include <iostream>
using namespace std;

int main()
{
    int a[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int value = 5;

    // Shift elements to right
    for(int i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert at first index
    a[0] = value;
    n++;

    // Print array
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
