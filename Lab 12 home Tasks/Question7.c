# include <ctype.h>
# include <stdio.h>
# include <string.h>

int ispalindrome(char str[],int left,int right){
    if(left>=right){
        return 1;
    }
    if(tolower(str[left]) != tolower(str[right])) return 0;

    return ispalindrome(str,left+1,right -1);
}

int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")] = '\0';
    printf("%d", ispalindrome(str,0,strlen(str)-1));
}