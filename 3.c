#include<stdio.h> 
int swap(int *a,int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main()
{
	int num1 = 10,num2 = 20;
	swap(&num1,&num2);
	printf("After swapping :num1 = %d\tnum2 = %d\n",num1,num2);
	return 0;
}
