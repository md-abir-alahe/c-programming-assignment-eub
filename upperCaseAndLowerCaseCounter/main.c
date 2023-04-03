#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int u=0,l=0;
    char str[100];
    printf("Enter a string : ");
    gets(str);
    for(int i=0; i<strlen(str); i++){
        if(isupper(str[i])){
            u++;
        }
        else if(islower(str[i])){
            l++;
        }
    }
    printf("Number of uppercase : %d \nNumber of lowercase : %d",u,l);
    return 0;
}
