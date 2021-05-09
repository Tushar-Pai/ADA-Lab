#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int arr[1000000];

int swap(int arr[], int index1, int index2)
{
    int temp = arr[index2];
    arr[index2] = arr[index1];
    arr[index1] = temp;
}

int FindMin(int arr[], int n, int i)
{
    int minindex = i, temp;

    for (int j = i; j < n; j++)
    {
        if (arr[j] < arr[minindex])
        {
            minindex = j;
        }
    }
    return minindex;
}

void SelectionSort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int min = FindMin(arr, n, i);
        swap(arr, min, i);
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
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

    start = time(NULL);
    SelectionSort(arr, n);
    end = time(NULL);

    printf("The array is sorted\n");
    // printf("The sorted array is: \n");
    // printArray(arr, n);

    printf("The time taken is %.10f\n", difftime(end, start) / CLOCKS_PER_SEC);
    return 0;
}
