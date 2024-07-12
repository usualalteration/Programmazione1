#include <stdio.h>
#include <stdlib.h>

int loadvet(int a[], int n);
int printvet(int a[], int n);

int main(){
    int output;
    int a[10];
    output = (loadvet(a,10));
    if (output == 1){
        printvet(a,10);
    }
}

int loadvet(int a[], int n){
    int ok = 1;
    int i = 0;
    int x;
    scanf("%d", &x);
    a[i]=x;
    while(a[i]!= -1 && i<n-1){
        i = i+1;
        scanf("%d", &x);
        a[i]=x;
    }
    if (a[i] != -1){
        printf("Errore");
        ok = 0;
    }
    else{
        return ok;
    }
}

int printvet(int a[], int n){
    int i = 0;
    while(a[i]!=-1){
        printf("%d\n",a[i]);
        i = i+1;

    }
}
