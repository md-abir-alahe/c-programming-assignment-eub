#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please enter : ");
    scanf("%d",&n);
    for(int i=1;i<=n;){
        for(int j=1;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
        n--;

    }
    return 0;
}
