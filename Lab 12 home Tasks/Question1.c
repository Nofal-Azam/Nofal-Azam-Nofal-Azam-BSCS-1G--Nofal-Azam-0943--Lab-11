# include<stdio.h>
# include <stdlib.h>

int main(){
    int size;
    scanf("%d",&size);
    int *arr = (int *)calloc(size,sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    for(int i =0; i< size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0; i< size;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
}