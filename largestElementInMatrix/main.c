#include <stdio.h>
#include <stdlib.h>

int main()
{
    int largest, arrOne[3][3],a=1,b=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter arrOne (%d, %d): ",i+1,j+1);
            scanf("%d",&arrOne[i][j]);
        }
    }
    largest = arrOne[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(largest<arrOne[i][j]){
                largest=arrOne[i][j];
                a=i+1;
                b=j+1;
            }
        }
    }
    printf("Largest element in matrix is (%d, %d): %d",a ,b ,largest);
    return 0;
}
