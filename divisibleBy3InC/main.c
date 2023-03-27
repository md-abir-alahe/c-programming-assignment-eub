#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,flag=0,j=0;
    printf("Starting number : ");
    scanf("%d",&a);
    printf("Ending number : ");
    scanf("%d",&b);
    int arr[((b-a)+1)];
    for(int i=a;i<=b;i++){
        if((i%3)==0){
            flag++;
            arr[j]=i;
            j++;
        }
    }
    for(int i=0; i<flag;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
