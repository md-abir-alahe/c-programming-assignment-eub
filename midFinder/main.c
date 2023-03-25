#include <stdio.h>
#include <stdlib.h>

float findMid(int n, float nums[]);

int main()
{
    for(int i=0; ; i++)
    {
        int n;
        float result;
        printf("Number of elements : ");
        scanf("%d",&n);
        float numbers[n];
        printf("Enter numbers : ");
        for(int i=0; i<n; i++)
        {
            scanf("%f",&numbers[i]);
        }
        result = findMid(n,numbers);
        printf("%.2f\n",result);
    }

    return 0;
}

float findMid(int n, float nums[])
{
    if((n%2)==0)
    {
        return (nums[(n/2)-1]+nums[((n/2)+1)-1])/2;
    }
    else
    {
        return nums[((n+1)/2)-1];
    }
}





