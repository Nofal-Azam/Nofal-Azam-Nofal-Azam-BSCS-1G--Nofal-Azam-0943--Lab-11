# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct
{
    char name[20];
    int marks;
}Student;

int main(){
    int students;
    scanf("%d",&students);
    getchar();
    Student *arr = (Student *)calloc(students,sizeof(Student));
    if(arr == NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    for(int i =0; i< students;i++){
        printf("Name: ");
        fgets(arr[i].name, 20, stdin);
        arr[i].name[strcspn(arr[i].name,"\n")] = '\0';
        printf("Marks: ");
        scanf("%d",&arr[i].marks);
        getchar();
    }
    for(int i =0; i< students;i++){
        if(arr[i].marks > 75){
            printf("%s : %d",arr[i].name,arr[i].marks);
        }
    }
    free(arr);
}

