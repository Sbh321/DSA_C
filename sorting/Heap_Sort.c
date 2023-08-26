#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void create(int[]);
void down_adjust(int[], int);
void heap_sort(int, int[]);

void heap_sort(int n , int heap[100])
{
  int a[100], i, op;
  int last, temp;
  // create a heap
  heap[0] = n;
  create(heap);
  // sorting
  while (heap[0] > 1)
  {
    // swap heap[1] and heap[last]
    last = heap[0];
    temp = heap[1];
    heap[1] = heap[last];
    heap[last] = temp;
    heap[0]--;
    down_adjust(heap, 1);
  }

  // print sorted data
  printf("\nArray after sorting:\n");
  for (i = 1; i <= n; i++)
    printf("%d \n", heap[i]);
}

void create(int heap[])
{
  int i, n;
  n = heap[0]; // no. of elements
  for (i = n / 2; i >= 1; i--)
    down_adjust(heap, i);
}

void down_adjust(int heap[], int i)
{
  int j, temp, n, flag = 1;
  n = heap[0];
  while (2 * i <= n && flag == 1)
  {
    j = 2 * i; // j points to left child
    if (j + 1 <= n && heap[j + 1] > heap[j])
      j = j + 1;
    if (heap[i] > heap[j])
      flag = 0;
    else
    {
      temp = heap[i];
      heap[i] = heap[j];
      heap[j] = temp;
      i = j;
    }
  }
}

int main()
{
  int n, i, heap[30];
  printf("HEAP SORT\n");
  printf("Enter no. of elements: ");
  scanf("%d", &n);
  printf("\nEnter elements: ");
  for (i = 1; i <= n; i++)
    scanf("%d", &heap[i]);
  heap_sort(n, heap);
}
