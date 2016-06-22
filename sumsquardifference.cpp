#include<stdio.h>
#include<math.h>

int main()
{
float n=0,z=0;
while(n<=100)
{
	z = z + n*n*(n-1);
	n++;
	//printf("%0f\n", n);
	//printf("%0f\n", z);
}
printf("%f", z);
	return 0;
}
