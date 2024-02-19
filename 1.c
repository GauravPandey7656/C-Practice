#include<stdio.h>
int main()
{
	int a,b,sum,minus,mul,div,re;
	printf("Enter the value of a and b = ");
	
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Sum=%d",sum);
	minus=a-b;
	printf("Minus=%d",minus);
	mul=a*b;
	printf("Multiplicatin=%d",mul);
	div=a/b;
	printf("Divison= %d",div);
	re=a%b;
	printf("Remainder=%d",re);
	
	return 0 ;
}
