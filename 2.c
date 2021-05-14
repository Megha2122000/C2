#include<stdio.h>
int main()
{
	int a = 20 , b = 40;
	printf("\n\n----------BEFORE SWAPPINFG NUMBERS----------");
	printf("\n\n a=%d " , a );
	printf("\n\n b=%d" , b);
	a = a+b;
	b=a-b;
	a=a-b;
	printf("\n\n----------After SWAPPING NUMBERS----------");
	printf("\n\n  a=%d " , a );
	printf("\n\n  b=%d" , b);
	return 0;
}
