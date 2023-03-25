#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],a=0,b=0;
    for(int i=0;i<10;i++){
            scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
            if(arr[i]>=0){
                a++;
            }
            else{
                b++;
            }
    }
    printf("Positive integer : %d\nNegative integer : %d",a,b);
    return 0;
}
