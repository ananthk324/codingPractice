// Count and Sort implementation in C
#include <stdio.h>
#include <stdlib.h>

int countAndSort(int in_array[], int max_num, int size)
{
    int temp_array[max_num + 1], out_array[size], index, i, j;
    
    for(i = 0; i <= max_num; i++)
        temp_array[i] = 0;
    
    for(i = 0; i <= size; i++)
        temp_array[in_array[i]]++;
    
    index = 0;
    for(j = 0; j <= max_num; j++)
    {
        for(i = 0; i < temp_array[j]; i++)
        {
            out_array[k] = j;
	    index++;
        }
    }
    
    printf("\nSorted Array: ");
    for(i = 0; i <= size; i++)
        printf("%d ", out_array[i]);
	
	return 0;
}

int main()
{
    int* in_array;
    int size, max_num, i;

    printf("\nCount and Sort\nEnter array size, max num: ");
    scanf("%d %d", &size, &max_num);
    
    in_array = (int*)malloc((sizeof(int)) * size);
    
    printf("\nInput array elements: ");
    for(i = 0; i <= size; i++)
        scanf("%d", &in_array[i]);
    
    countAndSort(in_array, max_num, size);
    return 0;
}
