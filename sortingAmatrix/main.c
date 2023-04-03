#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[3][3], tempArr[9],k=0,s;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            tempArr[k] = matrix[i][j];
            k++;
        }
    }
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(tempArr[i]>tempArr[j]){
                s = tempArr[i];
                tempArr[i] = tempArr[j];
                tempArr[j] = s;
            }
        }
    }
    k=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrix[i][j]=tempArr[k];
            printf("%d ",matrix[i][j]);
            k++;
        }
        printf("\n");
    }



    return 0;
}
