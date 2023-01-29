#include<iostream>
using namespace std;
int main()
{
    int k=0,j=0,b[100],n;
    cout<<"enter the length of an array\t";
    cin>>n;
cout<<"enter the elements of an array"<<endl;
     for(int i=0;i<n;i++)
            cin>>b[i];
            for(int i=0;i<n-1;i++){
              for(j=0;j<n-i-1;j++)
              {
             if (b[j]>b[j+1]){//for decreasing order use '<'
                k=b[j];
                b[j]=b[j+1];
                b[j+1]=k;
             }
              }
            }
            cout<<"Sorted list of array is\n";
            for(int i=0;i<n;i++)
                cout<<b[i]<<"\n";
            return 0;
}
