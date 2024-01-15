#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_INT 1000

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int n ;
   scanf("%d" , &n);
   
 int *arr = (int*) malloc(n * sizeof(int)) ;
 int count =0 ;
  while (count < n && scanf("%d", (arr+count)) == 1) 
  {
        count++;
  }

  int sum =0;
  for ( int i =0 ; i< n ; i++ )
  {
     sum += *(arr+i) ;
  }
   printf("the sum of elemts is %d \n",sum);
    return 0;
}