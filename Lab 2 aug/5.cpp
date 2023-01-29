#include<iostream>
#include<conio.h>
using namespace std;
struct mat{
    int a[20][20];
    int n;
void matrix(){
cout<<"Enter the numbers of rows or column";
cin>>n;
cout<<"Enter the elements of "<<n<<"*"<<n<<" matrix"<<endl;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
{
    cin>>a[i][j];
}
cout<<"The elements of "<<n<<"*"<<n<<" matrix is "<<endl;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
{
       cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
}
void nonzero(){
    int b=0;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++){
    if (a[i][j]==0)
        b+=1;
 }
cout<<"\nThe number of nonzero elements of given matrix is "<<b;
}
void ld(){
    int b=0;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++){
    if (i==j)
        b+=a[i][j];
}
cout<<"\nThe sum of the elements of the main diagonal is "<<b;
}
};
int main()
{
mat m;
m.matrix();
m.nonzero();
m.ld();
return 0;
}

