#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*top=NULL;
void push(int x)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("\n stack overflow");
    }
    else
    {
        p->data=x;
        p->next=top;
        top=p;
    }
}
int pop()
{
    int p =-1;
    if(top)
    {
        p=top->data;
        top=top->next;
        return p;
    }
    else{
        printf("stack underflow\n");
        return p;
    }
    
}
void print()
{
    struct node*p = top;
    while(p)
    {
        printf("%d",p->data);
        p = p->next;
    }
}
void main()
{
    int x;
    for(int i =0;i<5;i++)
    {
        scanf("%d",&x);
        push(x);
    }
    print();
    pop();
    pop();
    printf("\n");
    print();
}



