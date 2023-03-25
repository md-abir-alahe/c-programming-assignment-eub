#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrOne[3][3], arrTwo[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter arrOne (%d, %d): ",i+1,j+1);
            scanf("%d",&arrOne[i][j]);
        }
    }
    printf("\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter arrTwo (%d, %d): ",i+1,j+1);
            scanf("%d",&arrTwo[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d ",arrTwo[i][j]+arrOne[i][j]);
        }
    }
    return 0;
}
