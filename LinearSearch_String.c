//To search a name in array of strings.

#include <stdio.h>
#include <string.h>

int main(void)
{
     char name[20][20]={"Aayush","Balen","Crap","Nijal","Subham","Utsav"};

    for(int i=0;i<6;i++)
    {
        if (strcmp(name[i],"Crap") == 0)
        {
            printf("Found!");
            return 0;
        }
    }
    printf("Not found!");
    return 1;


}