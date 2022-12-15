#include<stdio.h>
void tow(int *,int,char,char,char);
void main(){
    int n;
    int sc; 
    printf("Enter the number of disk:");
    scanf("%d",&n);
    tow(&sc,n,'s','a','t');
}
 void tow(int*sc,int n,char s,char a,char t)
{
    if (n>0)
    {tow(sc,n-1,'s','t','a');
    printf("\n step %d  move disk %d from rod %c to %c ",++(*sc),n,s,a,t);
    tow(sc,n-1,'a','s','t');
}
}