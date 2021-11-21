




#include <stdio.h>
void print(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void merge(int array[], int mid, int low, int high)
{

    int i, j, k, B[100];   // new array is given for storing the array elements orderly.(this is not needed for the quick sort because there is partitioner )
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)    // here 'i' is for one for left part of array 'mid'  && 'j' is right part of array  'mid'
    {
        if (array[i] < array[j])     // if left part of array element is smaller thanthe right part of array then the left part of 
                                       // array element is placed at first postion of new B array.(this 1st element will changed after merging array again)
        {
            B[k] = array[i];
            i++;
            k++;
        }
        else
        {
            B[k] = array[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = array[i]; // when i or j is exceeded beyond their limits remaining array of other half (j or i) is continuously sorted.
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = array[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        array[i] = B[i];
    }
}

void mergesort(int array[], int low, int high)
{
    if (low < high)
    {

        int mid;
        mid = (low + high) / 2;

        mergesort(array, low, mid);       // this is most cruisial point of this program where 
                                           // all the aray is divided into a branch  type structure.
        mergesort(array, mid + 1, high);
        merge(array, low, mid, high);   //---->  after this the last branch is merged and continued upto root of this branches
    }
}
int main()
{
    int array[5] = {3, 2, 1, 9, 5};
    print(array, 5);
    mergesort(array, 0, 4);   
    print(array, 5);
    return 0;
}