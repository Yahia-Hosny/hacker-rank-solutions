#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    
    char * counters = (char*)calloc(10,sizeof(char)) ;

    char * input_line = (char*)malloc(1024*sizeof(char)) ;
    scanf ("%[^\n]" , input_line);
    input_line = (char *)realloc(input_line,strlen(input_line) +1 ) ;
    for (int i = 0; i < strlen(input_line) ; i++) 
    {
        switch (*(input_line+i)) 
        {
          case '0' : counters[0]++ ;break;  
          case '1' : counters[1]++ ;break;  
          case '2' : counters[2]++ ;break;  
          case '3' : counters[3]++ ;break;  
          case '4' : counters[4]++ ;break;  
          case '5' : counters[5]++ ;break;  
          case '6' : counters[6]++ ;break;  
          case '7' : counters[7]++ ;break;  
          case '8' : counters[8]++ ;break;  
          case '9' : counters[9]++ ;  
        }
       
    }
    // printf("\n");
    for (int i =0; i<10; i++)
    {
       printf("%i " ,*(counters+i));
    }
    
    return 0;
}
