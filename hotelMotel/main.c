#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    15. Suppose, you are the manager of a small hotel comprising 10 rooms that supports  local tourism. Recently you have been thinking about maintaining a system where a visitor will be able to see the room info on a screen that includes room no, availability status, and their respective costs, which will help them to choose the respective room if available. Now write a C program to create that system. You can create an entry, modify a new entry, or just show the data that exists in the system.
    */
    int roomNumber[10],roomStatus,r;
    for(int i=0; i<10; i++)
    {
        roomNumber[i]=i+1;
        printf("%d",roomNumber[i]);
        printf(" Available\n");
    }

    printf("Choose room no : ");
    scanf("%d",&r);
    printf("Choose option:\n\t1. Book\n\t2. Available");
    scanf("%d",&o);
    switch(o){
    case 1:

    }

    return 0;
}
