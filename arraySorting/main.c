#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5, b=0, c=2,tem;
    if(a>b){
        tem = a;
        a=b;
        b=tem;
    }
    else if(a>c){
        tem = a;
        a=c;
        c=tem;
    }
    if(b>c){
        tem = b;
        b =c ;
        c= tem;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
