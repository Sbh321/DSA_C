#include <stdio.h>
#include <conio.h>

void quick_sort(int[], int, int);
int partition(int[], int, int);

void quick_sort(int a[100], int l, int u)
{
  int j;
  if (l < u)
  {
    j = partition(a, l, u);
    quick_sort(a, l, j - 1);
    quick_sort(a, j + 1, u);
  }
}

int partition(int a[100], int l, int u)
{
  int v, i, j, temp;
  v = a[l];
  i = l;
  j = u + 1;
  do
  {
    do
    {
      i++;
    } while (a[i] < v && i <= u);
    do
    {
      j--;
    } while (a[j] > v);

    if (i < j)
    {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  } while (i < j);

  a[l] = a[j];
  a[j] = v;
  return (j);
}

int main()
{
  int a[100], n, i, op;
  printf("QUICK SORT\n");
  printf("Enter no of elements: ");
  scanf("%d", &n);
  printf("Enter the nos: ");
  for (i = 0; i <= n - 1; i++)
  {
    scanf("%d", &a[i]);
  }
  quick_sort(a, 0, n - 1);
  printf("sorted array is\n");
  for (i = 0; i <= n - 1; i++)
  {
    printf("%d\n", a[i]);
  }

}
