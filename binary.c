#include <stdio.h>
int binarysearch(int data[],int search,int n){
  int first=0,mid,last=n-1;
  while(first<=last){
    mid=first+(last-first)/2;
    if (data[mid]==search)
    {
      return mid;
    }
    if (data[mid]<search)
    {
      first=mid+1;
    }
    else
      last=mid-1;
  }
  return -1;
}

int main(){
  int data[7] = {1, 2, 5, 6, 8, 9, 10};
  int n=7,search=23,final;
  final=binarysearch(data,search,n);
  if (final !=-1)
  {
    printf("Element is present\n");
  }
  else
    printf("Not found\n");

  return 0;
}