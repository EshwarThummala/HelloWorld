#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void  main()
{
	int first,second;
	printf("Enter First Number\n");
	scanf("%d",&first);
	printf("Enter second Number\n");
	scanf("%d",&second);
	printf("Before Swaping first=%d,second=%d",first,second);
	swap(&first,&second);
	printf("After Swaping first=%d,second=%d",first,second);
}
