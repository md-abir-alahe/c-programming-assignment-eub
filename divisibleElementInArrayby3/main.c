#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrOne[3][3], newArr[9],k=0, flag=0,a;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter arrOne (%d, %d): ",i+1,j+1);
            scanf("%d",&arrOne[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                a = arrOne[i][j];
            if((a%3)!=0){
                flag++;
                newArr[k]=a;
                k++;
            }
        }
    }
    for(int i=0; i<flag;i++){
        printf("%d ",newArr[i]);
    }
    return 0;
}
