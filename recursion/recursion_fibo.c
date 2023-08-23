#include <stdio.h>
int fibo(int);

int main(void)
{
  int choice,n;
  do
  {
    printf("\n------------------------------\n");
    printf("Menu:\n");
    printf("1. Generate Fibonacci Series\n");
    printf("2. Quit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
      case 1:
        printf("Enter the value of n: ");
        scanf("%d",&n);
        for (int i=0;i<n;i++)
        {
            printf("%d\t",fibo(i));
        }
        break;
        
      case 2:
        printf("Quitting......");
        break;

      default:
        printf("Invalid Choice!!");
        break;
    }
  } while (choice!=2);

}

int fibo(int k)
{
  if (k==1 || k==2)
  {
    return 1;
  }
  else if (k==0)
  {
    return 0;
  }
  else
  {
    return fibo(k-1)+fibo(k-2);
  }
}