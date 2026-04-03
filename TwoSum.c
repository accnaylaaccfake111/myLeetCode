#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = (int *)malloc(2*sizeof(int));
    int n;

    arr[1000] = 67;
    scanf("%d",&n);

    printf("%d %d",n,arr[1000]);

    return(0);
}