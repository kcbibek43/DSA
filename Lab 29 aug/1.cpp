#include<iostream>
#include<conio.h>
using namespace std;

    void display(int n){
          int p1[100];
    cout<<"Enter the coffecient of the polynomial"<<endl;
    for (int i=0;i<=n;i++)
            cin>>p1[i];
     cout<<"The polynomial is ";
        for (int i=n;i>=0; i--)
    {
       if(p1[i]!=0){
            cout << p1[i];
       if (i!=0)
        cout << "x^" << i ;
       if (i!=0)
       cout << " + ";
       }
    }
cout<<endl;
    }
int main(){
        int y;
              cout<<"Enter the highest index of the 1st polynomial\t";
    cin>>y;
    display(y);
}
