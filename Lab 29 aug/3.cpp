#include<iostream>
#include<conio.h>
using namespace std;

    void display(int n,int m,int p3[]){
          int p1[100],p2[100];
    cout<<"Enter the coffecient of the polynomial"<<endl;
    for (int i=0;i<=n;i++)
            cin>>p1[i];
     cout<<"The 1st polynomial is ";
        for (int i=0;i<=n; i++)
    {
       cout << p1[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != n)
       cout << " + ";
    }
cout<<endl;
    cout<<"Enter the coffecient of the polynomial"<<endl;
    for (int i=0;i<=m;i++)
            cin>>p2[i];


    cout<<"THe 2nd polynomial is ";
   for (int i=0; i<=m; i++)
    {
       cout << p2[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != m)
       cout << " + ";
    }
    cout<<endl;
    for (int i = 0; i<=m+n; i++)
     p3[i] = 0;
for (int i=0;i<=m;i++)
    for (int j=0;j<=n;j++)
    p3[i+j]=p1[j]*p2[i]+p3[i+j];
    }

    int main(){
        int x,y,a[100];
              cout<<"Enter the highest index of the 1st polynomial\t";
    cin>>y;
              cout<<"\nEnter the highest index of the 2nd polynomial\t";
    cin>>x;
    display(y,x,a);
      cout<<"\nAfter multiplication of 1st and 2nd polynomial "<<endl;
for (int i=0; i<=x+y; i++)
    {
       cout << a[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != x+y)
       cout << " + ";
    }
     }


