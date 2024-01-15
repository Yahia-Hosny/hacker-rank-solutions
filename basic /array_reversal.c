#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE   1000

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
    int num, *arr, i;
    do {scanf("%d", &num);}
    while (num > MAX_SIZE);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

 for (int i = 0; i < (num/2) ; i++)
  {
     swap ( arr+i , arr+num-i-1 );
  }
    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}