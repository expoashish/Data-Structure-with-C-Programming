// Selection sort is an algorithm that selects the smallest element from an 
// unsorted list in each iteration and places that element at the beginning
//  of the unsorted list.

// In this we start from first element and compare it with the 2nd ,3rd and so on 
// until it finds the minimum value. In this way it places the minimum value in the
// first position of the array. Next time we take the 2nd element and compare it 
// with 3rd,4th,5th and so on until it find the 2nd minimum value and thus it places
// the 2nd minimum value in 2nd position of array and  this process continues until 
// the entire list becomes sorted

#include <stdio.h> 
int main()
{
   int data[10]={5,3,-7,-3,2,9,1,4,0,6};
   int i,j,n=10,min_value,temp;

   for (i = 0; i < n-1; i++)
   {
      min_value=i;
      for (j = i+1; j < n; j++)
      {
         if (data[j]<data[min_value])
         {
            min_value=j;
         }
      }
      temp = data[i];
      data[i] = data[min_value];
      data[min_value] = temp;
   }
   printf("Sorted elements are:\n");
   for (i = 0; i < n; i++)
   {
      printf("%d\n",data[i]);
   }

   return 0;
}