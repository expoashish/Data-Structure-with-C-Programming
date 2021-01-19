// Linear search is the simplest searching algorithm that searches for an 
// element in a list in sequential order. We start at one end and check 
// every element until the desired element is not found.

#include <stdio.h>
int main(){
	int data[5]={3,7,5,4,8};
	int i,search=4,temp=0,n=5;

	for (i = 0; i < n; i++)
	{
		if (search==data[i])
		{
			temp=1;
			printf("Data founded:%d at index no:%d\n",data[i],i);
			break;
		}
	}
	if (temp=0)
	{
		printf("Data not founded \n");
	}


	return 0;
}