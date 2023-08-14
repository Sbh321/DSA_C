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

    default:
      printf("**********************\n   Invalid choice!!\n**********************");
      break;
  }
  loop2:
  printf("\n-----------------------------------------------------------");
  printf("\nDo you still use the stack?\nChoose 1 for yes and 2 for no: ");
  scanf("%d",&c);
  if (c==1)
  {
    goto loop1;
  }
  else if (c==2)
  {
    printf("You have choosen to exit!!");
    return 0;
  }
  else
  {
    printf("*********************\n   Invalid input!!\n*********************");
    goto loop2;
  }

}

void push()
{
  int val;
  if (top==n)
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
  for (i=0; i<=top; i++)
  {
    printf("%d\n",stack[i]);
  }
}