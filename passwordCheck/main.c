#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int a=0,b=0,c=0,k=0;
    char str[100];
    for(int i=0;; i++)
    {
        printf("Enter your password : ");
        gets(str);
        for(int i=0; i<=strlen(str); i++)
        {
            if(islower(str[i]))
            {
                a=1;
            }
            else if(isupper(str[i]))
            {
                b=1;
            }
            else if(isdigit(str[i]))
            {
                c=1;
            }
            else if(str[i]>=32 && str[i]<=64){
                k=1;
            }
        }
        if(a==1&&b==1&&c==1&&k==1 )
        {
            printf("Strong\n");
        }
        else
        {
            printf("Weak\n");
        }
    }
    return 0;
}
