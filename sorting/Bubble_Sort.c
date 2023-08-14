#include <stdio.h>

int main()
{
    int i,a,r,temp;
    printf("How many numbers do u want? ");
    scanf("%d",&a);
    int x[a];
    for(i=0;i<a;i++)
    {
        printf("Enter %dth no.: ",i+1);
        scanf("%d",&x[i]);   
    }
    
    for(int j=0;j<a;j++)
    {
        for(i=0;i<a-1;i++)
        {
            if(x[i]>x[i+1])
            {
                temp=x[i];
                x[i]=x[i+1];
                x[i+1]=temp;

            }
        }
    }
    printf("After:-\n");
    for(i=0;i<a;i++)
    {
        printf("%d ",x[i]);
    }
    
}