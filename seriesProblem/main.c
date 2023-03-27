#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum=0  ;
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if((i%2)==0){
            sum = sum - (1.00/(i*i));
        }
        else{
            sum = sum + (1.00/(i*i));
        }
    }
    printf("%.2f ",sum);
    return 0;
}









