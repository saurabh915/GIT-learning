#include<stdio.h>
int main()
{
    int a;
    int array[50]= {1,14,12,18,66};
    printf("enter the number you want to find out:");
scanf("%d",&a);
for (int i = 0; i < 5; i++)
{
    if (array[i]==a)
    {
        printf("your number is found at location %d",i+1);
         
    }
    else
    {
        continue;
    }
    
    
    
}

    return 0;
} 