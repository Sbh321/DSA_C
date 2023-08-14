#include <stdio.h>

int main()
{
    int a,i,temp;
    printf("How many numbers do u want? ");
    scanf("%d",&a);
    int x[a];
    for(i=0;i<a;i++)
    {
        printf("Enter %dth no.: ",i+1);
        scanf("%d",&x[i]);   
    }

    for(int j=0;j<a-1;j++)
    {
        for(i=1+j;i<a;i++)
        {
            if(x[j]>x[i])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;

            }
        }
    }

    printf("After:-\n");
    for(i=0;i<a;i++)
    {
        printf("%d ",x[i]);
    }
    
}