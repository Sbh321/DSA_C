#include <stdio.h>
#include<conio.h>

void TOH(int,char,char,char);

int main()
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
        printf("Enter number of disks:");
        scanf("%d",&n);
        TOH(n,'O','D','I');
        getch();
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

void TOH(int n,char A,char B, char C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("Move disk %d from %c to %c\n",n,A,B);
        TOH(n-1,C,B,A);
    }
}

