#include <stdio.h>
#include <stdlib.h>


void bubble(int A[], int);
void stampaarray(int A[], int);

int main(){
    int A[]={8,20,22,34,55,0,0,0,1,2,4};
    int dim=11;
    printf("Array disordinato: ");
    stampaarray(A,dim);
    bubble(A,dim);
    printf("Array ordinato: ");
    stampaarray(A,dim);
    

}

void stampaarray(int a[], int DIM){
    int i;
    for(i=0;i<DIM; i++){
        printf(" %d ", a[i]);
    }
}

void bubble(int a[], int DIM)
{
    int i,j;
    int tmp;
    /*inv: 0<=j<=DIM-1 ∧ a[j+1.. (DIM-1)] è ordinato ∧ ∀ k 0<=k<j a[k]<=a[j] */
    for(j=(DIM-1);j>0;j=j-1)
    {
        /*inv: 0<=i<=j ∧ a[i] è il massimo di a[0..i] */
        for(i=0;i<j;i=i+1)
        {
            if(a[i]>a[i+1])
            {
                tmp=a[i];
                a[i]=a[i+1];
                a[i+1]=tmp;
            }
        }
    }
}