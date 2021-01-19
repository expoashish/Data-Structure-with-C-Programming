// Insertion sort is used to sort elements in either ascending or descending order

#include <stdio.h>
int main(){
	int data[8]={7,5,3,8,-2,0,4,9};
	int i,j,n=8,temp;

	for (i = 1; i < n; i++)
	{
		j=i;
		while(j>0 && data[j-1]>data[j]){
			temp=data[j];
			data[j]=data[j-1];
			data[j-1]=temp;
			j--;
		}
	}
	printf("Sorted elements are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n",data[i]);
	}


	return 0;
}