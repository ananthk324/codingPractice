#include <stdio.h>
#include <stdlib.h>

void merge(int *a, int *L, int nL, int *R, int nR) {
    int i=0, j=0, k=0;
    
    while(i<nL && j<nR) {
        if(L[i]<=R[j]) {
            a[k]=L[i];
            i++;
        } else {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    
    while(i<nL) {
        a[k]=L[i];
        i++;
        k++;
    }
    
    while(j<nR) {
        a[k]=R[j];
        j++;
        k++;
    }
    
}

void mergeSort(int *a, int n) {
    int *L, *R, mid = n/2;
    
    if(n<2) return;
    
    L = (int*)malloc(sizeof(int)*mid);
    R = (int*)malloc(sizeof(int)*(n-mid));
    
    for(int i=0; i<mid; i++) L[i] = a[i];
    for(int i=mid; i<n; i++) R[i-mid] = a[i];
    
    mergeSort(L, mid);
    mergeSort(R, n-mid);
    
    merge(a, L, mid, R, n-mid);
    
    free(L);
    free(R);
}

int main()
{
    int A[] = {3,6,2,1,7,5,8,9,9,0,11,15,13,4,0}, n;
    
    n = sizeof(A)/sizeof(A[0]);
    
    mergeSort(A, n);
    
    for(int i=0; i<n; i++)
        printf("%d ", A[i]);
        
    return 0;
}
