#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char str[100];
    printf("Enter a string : ");
    gets(str);

    int charCounter[26]={0};
    char c;

    for(int i=0;i<strlen(str);i++){
        c = tolower(str[i]);
        if(c>='a'&&c<='z'){
            charCounter[c-'a']++;
        }
    }

    for(int i=0;i<26;i++){
        if(charCounter[i]>0){
            printf("%c %d\n",i+'a',charCounter[i]);
        }
    }

    return 0;
}
