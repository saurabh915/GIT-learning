#include <stdio.h>
#include <stdlib.h>
// #include "P1-05.h"  
int   compare (void* ptr1, void* ptr2);                    // Header file int   compare (void* ptr1, void* ptr2);int main (void){// Local Definitions int i = 7 ;int j = 8 ;int lrg;// Statements lrg = (*(int*) larger (&i, &j, compare));printf ("Larger value is: %d\n", lrg);return 0;}  // main /* ==================== compare ==================== Integer specific compare function.   Pre  ptr1 and ptr2 are pointers to integer values   Post returns +1 if ptr1 >= ptr2        returns -1 if ptr1 <  ptr2*/int compare (void* ptr1, void* ptr2)
int main (void)
{// Local Definitions 
int i = 7 ;
int j = 8 ;
int lrg;// Statements
 lrg = (*(int*) larger (&i, &j, compare));
 printf ("Larger value is: %d\n", lrg);
 return 0;
 }  // main /* ==================== compare ==================== Integer specific compare function.   Pre  ptr1 and ptr2 are pointers to integer values   Post returns +1 if ptr1 >= ptr2        returns -1 if ptr1 <  ptr2*/int compare (void* ptr1, void* ptr2)
 int compare (void* ptr1, void* ptr2)
 {  if (*(int*)ptr1 >=  *(int*)ptr2)  
    return 1; 
     else     return -1;
     }
