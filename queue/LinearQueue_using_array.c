#include <stdio.h>
#include <conio.h>
int choice=0,i,j,n=0,front=-1,rear=-1;
int c;
void insert();
void delete();
void display();
int queue_array[100];

int main(void)
{
  printf("Enter the size of the queue: ");
  scanf("%d",&n);
  do
  {
    printf("Choose one option from below: ");
    printf("\n1.insert \n2.delete \n3.display\n4.exit");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
      case 1:
        insert();
        break;

      case 2:
        delete();
        break;

      case 3:
        display();
        break;

      case 4:
        printf("*********************\n Exitting......\n*********************");
        break;

      default:
        printf("**********************\n   Invalid choice!!\n**********************\n");
        break;
    }
  } while (choice!=4);
  
}

void insert()
{
  int val;
  if (rear == n-1)
  {
    printf("**************\nOverflow!!\n**************\n");
  }
  else
  {
    if(front == -1)
    {
      front = 0;
    }
    printf("Enter the value: ");
    scanf("%d",&val);
    rear++;
    queue_array[rear]=val;
  }
  
}

void delete()
{
    int val;
    if (front == -1 || front > rear)
    {
      printf("**************\nUnderflow!!\n**************\n");      
    }
    else
    {
      val=queue_array[front];
      printf("Deleted item is: %d\n",val);
      front++;
    }
}

void display()
{
  int i = front;
  if (front == -1 || front > rear)
  {
    printf("*****************\nQueue is empty\n*****************");
  }
  else
  {
    for(i;i<=rear;i++)
    {
      printf("%d\t",queue_array[i]);
    }
  }
  printf("\n");
}