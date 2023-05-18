#include <stdio.h>
#include <stdlib.h>

//insertion sort
/*
		ALGORITHM:
			
			1.Repeat step 2,3,4,5 until  i varies from 1 to n-1
			2.set temp=arr[i]
			3.set j=i-1;
			4. Repeat until j becomes less than 0 or arr[j] is less than or equal to temp
				
				a.Shift value at index j to j+1
				b.decrement j by 1
			
			5.store temp at j+1
			
			->>> Note : if our list is partially sorted then insertion sort is recommended
*/
int main() 
{
	int i,j;
	int temp;
	int size;
	
	printf("\nEnter the size of an array:");
	scanf("%d",&size); 
	
	int *arr=(int*)malloc(size*sizeof(int));
	
	printf("\nEnter %d Elements in the array:",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray Before Sorting is:");
	for(i=0;i<size;i++)
	{
		printf("%5d",arr[i]);
	}
	
	
	for(i=1;i<size;i++)
	{
		temp=arr[i];
		j=i-1;
		
		while((j>=0) && arr[j]>temp)  //loop insures that loop continues as lomg as j is greater than or equal to 0 
		                              //and the element at index j is greater than the current element temp
		{
			arr[j+1]=arr[j];
			j--;	
		}
		
		arr[j+1]=temp; 
	}
	
	printf("\nArray after sorting:");
	for(i=0;i<size;i++)
	{
		printf("%5d",arr[i]);
	}
	
	free(arr);
	return 0;
}
