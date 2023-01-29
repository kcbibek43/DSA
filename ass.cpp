//WAP to multiply two polynomial using array.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int p1[100],p2[100],p3[100],n,m,o;
    cout<<"Enter the highest index of the 1st polynomial\t";
    cin>>n;
    cout<<"Enter the coffecient of the polynomial"<<endl;
    for (int i=0;i<=n;i++)
            cin>>p1[i];
            cout<<"The polynomial is ";
        for (int i=0;i<=n; i++)
    {
       cout << p1[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != n)
       cout << " + ";
    }
  cout<<"\nEnter the highest index of the 2nd polynomial\t";
    cin>>m;
    cout<<"Enter the coffecient of the polynomial"<<endl;
    for (int i=0;i<=m;i++)
            cin>>p2[i];
            cout<<"THe polynomial is ";
   for (int i=0; i<=m; i++)
    {
       cout << p2[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != m)
       cout << " + ";
    }
    for (int i = 0; i<=m+n; i++)
     p3[i] = 0;
for (int i=0;i<=m;i++)
    for (int j=0;j<=n;j++)
    p3[i+j]=p1[i]*p2[j]+p3[i+j];
    o=n+m;
    cout<<"\nAfter multiplication of 1st and 2nd polynomial "<<endl;
for (int i=0; i<=o; i++)
    {
       cout << p3[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != o)
       cout << " + ";
    }

}
