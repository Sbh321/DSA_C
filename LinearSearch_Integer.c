// To linear search a number in an array.

#include <stdio.h>

int main(void)
{
    int n[]={0,1,2,3,4,5,6};

    for(int i=0;i<7;i++)
    {
        if(n[i]==8)
        {
            printf("Found!");
            return 0;

        }
    }
    printf("not found");
    return 1;


}   
