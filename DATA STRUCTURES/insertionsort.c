#include <stdio.h>
int main()
{
    // star  with next number and compare with all previous numbers if previous number is greater replace it with his own location 
    //and compare itself with next previous number.
   // 
//most important part here is shifting of elements.....follow code you will observe that  elements are shifting.
    int array[7] = {6, 3, 9, 10, 15, 1, 2};
   for (int i = 1; i < 7; i++)
   {
       int key;
       key=array[i];  /*2nd element is selected as key and which is compared with other if the key element is smaller than previous element
                       position of key "that is i now" is given to that previous element. 
                       but now the position of previous element is void
                       so if next next previous element is lso less than this key previous elements position 
                       is given to next next element.
                                steps are: 1st check just adjucent number with i number 
                                                 then if adjucent number is greater than i number then swap the adjucent
                              number with i number before swapping store  i number as key.*/
         int j=i-1;                                        
       while (j>=0 && array[j]>key)
       {
           array[j+1]=array[j];
           j=j-1;
       }
       array[j+1]=key;
   }
   

    for (int i = 0; i < 7; i++)
    {
        printf("%d,", array[i]);
    }

    return 0;
}