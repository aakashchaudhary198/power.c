#include<stdio.h>
int power(int ,int);
int power(int a, int b)
{
	int i,result;
	for(i=1;i<=b;i++)
	{
		result=result*a;
	}
	printf("%d",result);
}
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d %d",&a,&b);
	power(a,b);
}

