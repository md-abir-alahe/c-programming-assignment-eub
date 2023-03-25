#include <stdio.h>
#include <stdlib.h>

int findDuplicate(int numbers[]);

int main()
{
    int numbers[10];
    printf("Enter 10 integers : ");
    for(int i=0;i<10;i++){
        scanf("%d",&numbers[i]);
    }
    findDuplicate(numbers);
    return 0;
}

int findDuplicate(int numbers[]){
    int a=numbers[0];
    for(int i=1;i<10;i++){
        if(a!=numbers[i]){
            a=numbers[i];
        }
        else{
            printf("Duplicate element : %d",a);
        }
    }
    if(a==numbers[9]){
        printf("No Duplicates");
    }
}
