#include<iostream>
#include<conio.h>
using namespace std;

    void display(int n,int m,int p3[])
    {
          int p1[100],p2[100];
    cout<<"Enter the coffecient of the polynomial"<<endl;
    for (int i=0;i<=n;i++)
            cin>>p1[i];
     cout<<"The 1st polynomial is ";
        for (int i=0;i<=n; i++)
    {
       cout << p1[i];
       if(p1[i]!=0){
       if (i != 0)
        cout << "x^" << i ;
       if (i != n)
       cout << " + ";
       }
    }
cout<<endl;
    cout<<"Enter the coffecient of the polynomial"<<endl;
    for (int i=0;i<=m;i++)
            cin>>p2[i];
    cout<<"THe 2nd polynomial is ";
   for (int i=0; i<=m; i++)
    {
       cout << p2[i];
       if (p2!=0){
       if (i != 0)
        cout << "x^" << i ;
       if (i != m)
       cout << " + ";
       }
    }
    cout<<endl;
        for (int i = 0; i<=m+n; i++)
     p3[i] = 0;
    if (m>n){
    for (int i = 0; i<=m; i++){
        if (i<=n)
        p3[i]=p1[i]+p2[i];
        else {
                if (i>n)
        p3[i]=p2[i];
        }
    }
        }else{
  for (int i = 0; i<=n; i++){
        if (i<=m)
        p3[i]=p1[i]+p2[i];
        else {
                if (i>m)
        p3[i]=p1[i];
        }
    }

    }
int main(){
int x,y,a[100];
              cout<<"Enter the highest index of the 1st polynomial\t";
    cin>>y;
              cout<<"\nEnter the highest index of the 2nd polynomial\t";
    cin>>x;
    display(y,x,a);
      cout<<"\nAfter addition of 1st and 2nd polynomial "<<endl;
for (int i=0; i<=; i++)
    {
       cout << a[i];
       if (a[i]!=0){
       if (i != 0)
        cout << "x^" << i ;
       if (i != c)
       cout << " + ";
    }}

}
