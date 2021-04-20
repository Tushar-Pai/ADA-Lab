#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[100000];

int binarySearch(int arr[], int l, int r, int x)
{
   for(int a=0;a<1000;a++)
  {
    for(int b=0;b<10000;b++)
    {

    }
  }
   if (r >= l)
   {
        int mid = l + (r - l)/2;
  
        if (arr[mid] == x) 
        return mid;
        if (arr[mid] > x)
       return binarySearch(arr, l, mid-1, x);
  
       
        return binarySearch(arr, mid+1, r, x);
   }
   return -1;
}

void sort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>=arr[j])
            {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
            }
        }
    }
}


int main()
{  
  int key,res,n;
  time_t start,end;
  
  printf("Enter the no of elements \n");
  scanf("%d",&n);

  for(int i=0;i<n;i++)
  {
    arr[i]=rand();
  }
  
  start=time(NULL);
  sort(arr,n);
  printf("The elements in sorted array are :\n");
   for(int i=0;i<n;i++)
  {
    printf("%d\t",arr[i]);
  }
  printf("\n");


  printf("Enter element to be searched\n");
  scanf("%d",&key);

  res=binarySearch(arr,0,n-1,key);
  end=time(NULL);

  if(res==-1)
    printf("Element not found in binary search\n");
  else
  printf("Element found in binary search at pos %d\n",res);


  printf("The time taken is %.10f",difftime(end,start)/CLOCKS_PER_SEC);

  return 0;
}
