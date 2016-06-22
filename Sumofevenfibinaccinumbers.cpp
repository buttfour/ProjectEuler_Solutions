#include<stdio.h>

int main()
{
	int last1=1, last2=0, next, sum=1, evensum;
	while ( next < 4000000 )
	{
		next = last1 + last2;
		last2 = last1;
		last1 = next;
		sum = sum + next;
	}
	evensum = ( sum - next ) / 2;
	printf( "The sum of the even Fibanacci numbers less than 4000000 is %d\n", evensum );
	return 0;
}
