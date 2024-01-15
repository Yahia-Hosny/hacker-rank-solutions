#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FIRST    1
#define SECOND   0

void swap(char *a, char *b)
{
   char *temp = (char *)calloc(1024 , sizeof(char));
  strcpy(temp, a);
  strcpy(a, b);
  strcpy(b ,temp);
  free (temp);
}


int lexicographic_sort(const char* a, const char* b)
{
   for (int i =0 ; i < strlen(a) ; i++)
   {
       if ( a[i] == b[i])
       {
           continue;
       }
       else if (a[i] < b[i])
        {
           
           return FIRST ;
           break;
        }
       else if (a[i] > b[i])
        {
           return SECOND;
           break;
        }
   }
}

int lexicographic_sort_reverse(const char* a, const char* b) 
{
for (int i =0 ; i< strlen(a) ; i++)
   {
       if ( a[i] == b[i])
       {
           continue;
       }
       if (a[i] > b[i])
        {
           
           return FIRST ;
           break;
        }
       else if (a[i] < b[i])
        {
           return SECOND;
           break;
        }
   }
}

int sort_by_number_of_distinct_characters(const char* a, const char* b)
 {
     int count_a =0 ;
     int count_b =0 ;
     
    for ( int i =0 ; i < strlen(a) + 1;i++)
    {
        for ( int j =i+1  ; j < strlen(a)+1 ;j++)
       {
         if ( a [i] == a[j])
         {
             count_a++;
         }
       }  
    }  
    
    for ( int i =0 ; i < strlen(b)+1; i++)
    {
        for ( int j =i+1  ; j < strlen(b)+1 ;j++)
       {
         if ( b [i] == b[j])
         {
             count_b++;
         }
       }  
    }
    
    int distinict_a = strlen(a)- count_a  ; 
    int distinict_b = strlen(b)- count_b ;
    
    if ( distinict_a < distinict_b)
    {
        return FIRST;
    }
    else if (distinict_a > distinict_b)
    {
       return SECOND;
    }
    else
     {
         return lexicographic_sort(a,b);    
     }
      
 }

int sort_by_length(const char* a, const char* b) 

{
   if (strlen(a) < strlen(b))
    {
        return FIRST;     
    }
    else if (strlen(a) > strlen(b))
    {
        return SECOND;     
    }
    else
     {
         return lexicographic_sort(a,b); 
     }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b))
{
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i+1 ; j < len ; j++)
        {
            if (cmp_func(arr[i],arr[j])  == SECOND )
            {
               index = j;
            }
            else
            {
                index =i;
            }

           swap(arr[i] , arr[index] ); 

        }
        
        
    }
    
     

}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    printf("\n");
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
    printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}