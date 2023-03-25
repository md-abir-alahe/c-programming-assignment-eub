#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    printf("Enter 10 integers : ");
    for(int i=0;i<10;i++){
        scanf("%d",&numbers[i]);
    }
    for(int i=8;i>0;i--){
        printf("%d ",numbers[i]);
    }
    return 0;
}
