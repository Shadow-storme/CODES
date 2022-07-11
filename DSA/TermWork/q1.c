#include<stdio.h>                            
void shiftIntegers(int arr[], int n)         
{                                           
    int j = 0,temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            j++;
        }
    }
}
void printArray(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        printf(" %d ", arr[i]);
    }

int main()
{  
    int arr[] = { 2,4,-10,13,-7,-60,52,8,-19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    shiftIntegers(arr, n);
    printArray(arr, n);
    return 0;
}
