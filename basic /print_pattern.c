// author : Yahia Hosny Yahia 
// Date : 15/01/2024 
//program :  print pattern 
//****************************************//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_N    1000
#define ROWS(x)   ((2*(x)-1))
int main() 
{

    int n;
    do {scanf("%d", &n);}
    while (n > MAX_N || n< 1);
    int rows = (2*n)-1;
    int arr [rows][rows];
    for (int i = 0; i < rows; i++)
    {
  
      for (int j = 0; j < rows ; j++)
      {
        arr[i][j] =0;
      }
  
    }

    int counter =0;
    int c2 = 1;
    
    // arr[(rows/2)][(rows/2)]=1;
    while ( n != 0)
    {
      for (int i = counter; i < ROWS(n)+counter; i++)
     {
       arr[counter][i]=n;
       arr[rows-c2][i]=n;
       arr[i][counter]=n;
       arr[i][rows-c2]=n;
     }
    counter ++;
    c2++;
    
    n--;
    }
for (int i = 0; i < rows; i++)
{
  
  for (int j = 0; j < rows ; j++)
  {
    printf("%d ",arr[i][j]);
  }
  printf("\n");
}
    
  	// Complete the code to print the pattern.
    return 0;
}