#include<stdio.h>
#define MAX 1000
void printsparse(int[][3]);
void readsparse(int[][3]);
int main()
{
    int b1[MAX][3],b2[MAX][3],m,n;
    printf("Enter the size of matrix (rows,columns):");
    scanf("%d%d",&m,&n);
    b1[0][0]=m;
    b1[0][1]=n;
    readsparse(b1);
    printsparse(b1);
}
void readsparse(int b[MAX][3])
{
    int i,t;
    printf("\nEnter no. of non-zero elements:");
    scanf("%d",&t);
    b[0][2]=t;
    for(i=1;i<=t;i++)
    {
        printf("\nEnter the next triple(row,column,value):");
        scanf("%d%d%d",&b[i][0],&b[i][1],&b[i][2]);
    }
}
void printsparse(int b[MAX][3])
{
    int i,n;
    n=b[0][2];
    printf("\nThe matrix is:\n");
    printf("\nrow\t\tcolumn\t\tvalue\n");
    for(i=0;i<=n;i++)
    printf("%d\t\t%d\t\t%d\n",b[i][0],b[i][1],b[i][2]);
}
