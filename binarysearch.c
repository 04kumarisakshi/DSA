#include<stdio.h>
int binarysearch(int arr,int n ,int key)
{
    int start = 0;
    int end = n-1;
    int mid =(start+end)/2;
    while(start<=end)
    {
      if(mid==key)
      {
        return mid;
      }
      if (mid>key)
      {
        start = mid+1;
      }
      else
      {
        end = mid-1;
      }
      mid = (start+end)/2;
    }
    return -1;
}
int main()
{  int n; int a;
printf("Enter the number of element in the array:",n);
scanf("%d",&n);
int arr[n];

for (int i =0;i<n;i++)
{printf("Enter the element of array");
scanf("%d",&arr[i]);
    
}
int key;
printf("Enter the key value",key);
scanf("%d",&key);
int index = binarysearch(arr,n,key);
printf("index number of the key word is :",index);
return 0;
}