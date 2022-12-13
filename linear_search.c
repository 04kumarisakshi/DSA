#include<stdio.h>
int  linearsearch(int arr[], int n,int key)
{     int i;
    for(i=0;i<n;i++)
    {
    if(arr[i]==key)
    {
        return i;
    }
    
    }
    return -1;
}
int main(){
    
    int n;
    int key;
    printf("Enter the size of array",n);
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
   { printf("Enter the element of array:");
    scanf("%d",&arr[i]);
   }
   printf("Enter the key",key);
   scanf("%d",&key);
   int result = linearsearch(arr, n, key);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}