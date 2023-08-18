#include <stdio.h>
#include <conio.h>
int stack[100],choice=0,i,j,n,top=-1;
int c;
void push();
void pop();
void peek();

int main(void)
{
  printf("Enter the size of the stack: ");
  scanf("%d",&n);
  loop1:
  do
  {
    printf("----------------------------\n");
    printf("Choose one option from below: ");
    printf("\n1.push \n2.pop \n3.peek");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
      case 1:
        push();
        break;

      case 2:
        pop();
        break;

      case 3:
        peek();
        break;

      case 4:
        printf("Exitting!!!....");

      default:
        printf("**********************\n   Invalid choice!!\n**********************");
        break;
    }
  } while (choice!=4);
  

 
}

void push()
{
  int val;
  if (top==n-1)
  printf("****************\n   Overflow!!\n****************");
  else
  {
    printf("Enter the value: ");
    scanf("%d",&val);
    top=top+1;
    stack[top]=val;
  }
}

void pop()
{
  int item;
  if (top==-1)
  printf("*******************\n   Underrflow!!\n*******************");
  else
  {
    item=stack[top];
    top=top-1;
    printf("The deleted item is: %d",item);
  }
}

void peek()
{
  for (i=top; i>=0; i--)
  {
    printf("%d\n",stack[i]);
  }
}