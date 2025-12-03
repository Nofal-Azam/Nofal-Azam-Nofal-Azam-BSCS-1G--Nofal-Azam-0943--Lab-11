# include<stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){
    char str1[50],str2[50];
    fgets(str1,50,stdin);
    str1[strcspn(str1,"\n")] = '\0';
    fgets(str2,50,stdin);
    str2[strcspn(str2,"\n")] = '\0';
    char *str = (char *)malloc(strlen(str1)*sizeof(char)+strlen(str2)*sizeof(char));
    if(str == NULL){
        printf("Couldnot allocate memory");
        return 1;
    }
    strcpy(str,str1);
    strcat(str,str2);
    printf("%s",str);
    free(str);
}