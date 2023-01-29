#include <iostream>
using namespace std;
int main()
{
    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cout << "\nEnter the "<< i + 1 <<" Elements in an array :";
        cin >> a[i];
    }
    cout <<"\nArray :";
    for (int i = 0; i < 12; i++)
    {
        cout << a[i]<<"\t";
    }
    return 0;
}
