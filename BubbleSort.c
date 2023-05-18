#include <stdio.h>
#include <stdlib.h>

//Bubble Sort
int main() 
{
	int swap,i,j,k;
	int size;
	int arr[size];
	
	printf("\nEnter how many elements do you want:");
	scanf("%d",&size);

	printf("Enter %d Elements:",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n\nElements before sorting are:");
	for(i=0;i<size;i++)
	{
		printf("%5d",arr[i]);
	}
	
	printf("\nSorting starts..");
	printf("\n---------------------------------------------------------------");
	
	for(i=1;i<size;i++)  //size=5
	{
		printf("\nPass:%d",i);
		for(j=0;j<size-i;j++)
		{
			printf("\nComparing (%d) and (%d)",j+1,j+2);
			if(arr[j]>arr[j+1])
			{
				swap=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=swap;
			}
			
			printf("\t\t");
			for(k=0;k<size;k++)
			{
				printf("%5d",arr[k]);
			}
			printf("\n");
		}
		printf("\n");
		printf("\n---------------------------------------------------------------");
	}
	
	printf("\nElements after bubble sort are:");
	for(i=0;i<size;i++)
	{
		printf("%5d",arr[i]);
	}
//	return 0;
}
