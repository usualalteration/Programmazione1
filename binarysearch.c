#include <stdio.h>
#include <stdlib.h>

int bin_search(int A[], int dim, int x);

int main(){
    int A[]={0,0,0,1,2,4,8,20,22,34,55};
    int dim=11;
    int result= bin_search(A,dim,22);
    printf("%d\n", result);

}

int bin_search(int A[], int DIM, int x){
    int iniz=0;
    int fine=DIM-1;
    int med=(iniz+fine)/2;
    int pos=-1;
    /*invariante: x occorre in A se e solo se occorre fra le posizioni iniz e fine, e
    iniz >=0 e fine<DIM e iniz<=(med)<=fine*/
    while ((iniz<=fine)&&(pos==-1))
    {
        if (A[med]==x){
            pos=med;
        } 
        else{
            if (A[med]>x)
            {
                fine=med-1;
            }
            else
            {
                iniz=med+1; 
            }
            med=(iniz+fine)/2;
        }
    }
    return pos;
}