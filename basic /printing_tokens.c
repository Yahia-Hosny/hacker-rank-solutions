#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int j=0;
    for (int counter =0;counter < strlen(s)+1;counter++)
    {
        if (*(s+counter) == ' ' || *(s+counter) == '\0')
        {
           for (int i = j; i < counter; i++)
         {
            printf("%c" ,*(s+i));
            
         }
         printf("\n");
         j=counter+1;
        }
        
    }
    
    return 0;
}