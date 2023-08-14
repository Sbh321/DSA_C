#include  <stdio.h>

void insert();
void delete();
void display();
   int n;
   int f=3;
   int r=3;
   int item[4];

int main()
{
   int ch;
   printf("Enter:- \n1 for insert \n2 for delete \n3 for display \n");
   do
   {
      printf("Enter your choice: ");
      scanf("%d",&ch);
      switch (ch)
      { 
         case 1:
         insert();
         break;

         case 2:
         break;

         case 3:

         break;

         case 4:
         return 0;
         break;
      
         default:
         printf("Invalid choice");
         break;
      }
   }while (ch<5);
}

void insert()
{
   if (f==(r+1)%4)
   {
      printf("Queue is full");
   }
   else
   {
      int i;
      r=(r+1)%4;
      r++;
      printf("Enter the item: ");
      scanf("%d",&i);
      item[r]=i;
   }

}
