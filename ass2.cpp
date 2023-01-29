#include <iostream>
using namespace std;

// A[] represents coefficients of first polynomial
// B[] represents coefficients of second polynomial
// m and n are sizes of A[] and B[] respectively
int *multiply(int A[], int B[], int m, int n)
{
   int *prod = new int[m+n-1];

   // Initialize the porduct polynomial
   for (int i = 0; i<m+n-1; i++)
     prod[i] = 0;

   // Multiply two polynomials term by term

   // Take ever term of first polynomial
   for (int i=0; i<m; i++)
   {

     for (int j=0; j<n; j++)
         prod[i+j] += A[i]*B[j];
   }

   return prod;
}

void printPoly(int poly[], int n)
{
    for (int i=0; i<n; i++)
    {
       cout << poly[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != n-1)
       cout << " + ";
    }
}

int main()
{
    int A[] = {5, 0, 10, 6};

    int B[] = {1, 2, 4};
    int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(B)/sizeof(B[0]);

    cout << "First polynomial is n";
    printPoly(A, m);
    cout << "nSecond polynomial is n";
    printPoly(B, n);

    int *prod = multiply(A, B, m, n);

    cout << "nProduct polynomial is n";
    printPoly(prod, m+n-1);

    return 0;
}
