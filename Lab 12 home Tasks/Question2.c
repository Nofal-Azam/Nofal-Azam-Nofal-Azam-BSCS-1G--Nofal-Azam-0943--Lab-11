# include<stdio.h>
# include <stdlib.h>
#include <string.h>

int main(){
    char *str =(char *)calloc(100,sizeof(char));
    if(str==NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    fgets(str,100,stdin);
    str[strcspn(str,"\n")] = '\0'; 
    str = (char *)realloc(str,strlen(str)*sizeof(char));
    if(str==NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    for(int i = strlen(str); i>0;i--){
        printf("%c",str[i-1]);
    }
    free(str);
    return 0;
}