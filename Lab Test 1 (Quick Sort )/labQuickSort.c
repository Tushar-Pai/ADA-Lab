#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[1000000];

void swap(int arr[], int index1, int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int boundary = start - 1;

    for (int i = start; i <= end; i++)
    {

        if (arr[i] <= pivot)
        {
            boundary++;
            swap(arr, i, boundary);
        }
    }
    return boundary;
}

void quicksort(int arr[], int start, int end)
{

    for (int i = 0; i < 800; i++)
    {
        for (int i = 0; i < 400; i++)
        {
        }
    }
    if (start >= end)
        return;

    int boundary = partition(arr, start, end);
    quicksort(arr, start, boundary - 1);
    quicksort(arr, boundary + 1, end);
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void kth_min_element()
{
    int k;
    printf("Enter the value of k\n");
    scanf("%d", &k);
    printf("kth smallest element is : %d \n", arr[k - 1]);
}

int main()
{
    time_t start, end;
    int n;
    srand(time(0));
    printf("Enter the no of elements \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    printf("The unsorted array is: \n");
    printArray(arr, n);

    start = time(NULL);
    quicksort(arr, 0, n - 1);
    end = time(NULL);

    printf("The array is sorted\n");
    printf("The sorted array is: \n");
    printArray(arr, n);

    kth_min_element();

    printf("The time taken is %.10f\n", difftime(end, start) / CLOCKS_PER_SEC);
    return 0;
}
