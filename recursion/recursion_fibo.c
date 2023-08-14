#include <stdio.h>
int fibo(int);

int main(void)
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  for (int i=0;i<n;i++)
  {
      printf("%d\t",fibo(i));
  }
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