#include <stdio.h>
#include <stdlib.h>

//Selection sort

/*
	-In selection sort we have to find smallest or largest element and place it at  1st position
	-Intially consider first element as min_index i.e  'i=min_index;'
	-then   'j=i+1'   
	-Check if   'arr[min_index] > arr[j]'   if this is true then make  'min_index=j'  
	
	     min
	arr=[20      5       10      4      2]
	      0      1       2       3      4
	      i    j=i+1
	      
	      here i=min_index=20  and   j=i+1=5  
	      check if arr[min_index] > arr[j] i.e  20 > 5 ==true then change the value of min_index from 20 to 5
	      again check  5 > 10 ==false do not change min_index
		  next check is 5 > 4 ==true then changemin_index to 4  
		  again check  is 4 > 2 ==true then min_index=2
		  then swap the arr[min_index] to arr[j]
		  i.e change position of 20 and 2 now 2 is at index 0  
	-
*/
int main()
{
	int i,j,swap;
	int min_index;
	int size;
	int arr[size];
	
	printf("\nHow manny Elments do you want:");
	scanf("%d",&size);
	printf("\nEnter %d Elements for Selection Sort:",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nElements Before sorting are:");
	for(i=0;i<size;i++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n-----------------------------------------------------");
	
	for(i=0;i<size;i++)
	{
		min_index=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[min_index] > arr[j])
			{
				min_index=j;
			}
		}
		swap=arr[min_index];
		arr[min_index]=arr[i];
		arr[i]=swap;	
	}
	
	printf("\nElements After sorting are:");
	for(i=0;i<size;i++)
	{
		printf("%5d",arr[i]);
	}
	return 0;
}
