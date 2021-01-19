// Bubble sort is an algorithm that compares the adjacent elements 
// and swaps their positions if they are not in the intended order. 
// The order can be ascending or descending.

#include <stdio.h>
int main(){
	int data[5]={2,6,0,5,3};
	int i,j,n=5,temp=0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <n; j++)
		{
			if (data[j]>data[j+1])
			{
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
	printf("Sorted elements:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t",data[i] );
	}

	return 0;
}