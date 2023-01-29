#include<iostream>
using namespace std;
int main()
{
    int k,a,b[100],n;
    cout<<"enter the length of an array\t";
    cin>>n;
cout<<"enter the elements of an array\n"<<endl;
     for(int i=0;i<n;i++)
            cin>>b[i];
  cout<<"Enter the value of k\t"<<endl;
        cin>>k;
cout<<"Enter the value of Kth element\t";
cin>>a;
               b[k-1]=a;
    cout<<"The elements now after inserting new element is \n"<<endl;
         for(int i=0;i<n;i++)
        cout<<b[i]<<"\t";
}
