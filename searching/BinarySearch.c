#include <stdio.h>
#include <math.h>

int arr[100];

int main(void)
{
  int n;
  printf("Enter the number of data items: ");
  scanf("%d",&n);
  int i,temp;

//   sorting
  int x[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %dth no.: ",i+1);
        scanf("%d",&x[i]);   
    }
    for(int j=0;j<n-1;j++)
    {
        for(i=1+j;i<n;i++)
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
    for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }

    // searching
    int s;
    printf("\nEnter the data items to search: ");
    scanf("%d",&s);
    int left, right, mid;
    left = 0;
    right = n;
    mid = (left+right)/2;

    if (x[mid] == s)
    {
        printf("Item found at %dth index",mid);
    } 
    else (x[mid]<s)
    {
        
    }



  
}
