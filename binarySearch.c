/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int BinarySearch(int *A, int low, int high, int x) {
    int mid = low + (high-low)/2;
    if(low > high) return -1;
    
    if(x == A[mid]) return mid;
    else if(x > A[mid]) BinarySearch(A, mid+1, high, x);
    else BinarySearch(A, low, mid-1, x);
}

int main()
{
    int a[] = {3,4,6,9,11,15,17,19,25,28,31};
    
    int pos = BinarySearch(a,0,10,12);
    
    if(pos == -1) {
        printf("Element not found.");
    } else {
        printf("Element found at %d position.",pos+1);
    }

    return 0;
}
