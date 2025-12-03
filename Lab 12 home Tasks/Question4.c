# include<stdio.h>
# include <stdlib.h>

int main(){
    int *arr = (int *)calloc(4,sizeof(int));
    for(int i =0; i< 4; i++) arr[i] = i+1;
    for(int i =0;i<4;i++) printf("%d",arr[i]);
    printf("\n");
    free(arr);
    arr = (int *)malloc(4*sizeof(int));
    for(int i =0;i<4;i++) printf("%d",arr[i]);
}