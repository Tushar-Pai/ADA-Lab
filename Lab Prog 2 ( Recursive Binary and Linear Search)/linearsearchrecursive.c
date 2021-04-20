#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[100000];

int linear_search(int arr[], int key,int i,int n)
{ 
  for(int a=0;a<1000;a++)
  {
    for(int b=0;b<10000;b++)
    {

    }
  }

  if(i>n)
  return -1;
  if(arr[i]==key)
  return i;
  else
  {
    linear_search(arr,key,i+1,n);
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
  
  printf("The elements are :\n");
   for(int i=0;i<n;i++)
  {
    printf("%d\t",arr[i]);
  }
  printf("\n");

  printf("Enter element to be searched\n");
  scanf("%d",&key);


  
  start=time(NULL);
  res=linear_search(arr,key,0,n);
  end=time(NULL);

  if(res==-1)
    printf("Element not found in linear search\n");
  else
  printf("Element found in linear search at pos %d\n",res);

  printf("The time taken is %.10f",difftime(end,start)/CLOCKS_PER_SEC);

  return 0;
}


