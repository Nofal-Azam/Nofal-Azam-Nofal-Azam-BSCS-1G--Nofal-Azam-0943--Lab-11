# include <stdio.h>

void root(int n){
    if(n/10 != 0){
        int sum = 0;
        while(n>0){
            sum += n % 10;
            n = n/10;
        }
        printf("%d\n" ,sum);
        root(sum);
    }
    return;
}

int main(){
    root(9875);
}