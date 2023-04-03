#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[3][3], temp[9];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            temp[i] = matrix[i][j]
        }
        printf("\n");
    }


    return 0;
}
