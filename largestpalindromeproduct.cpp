#include<stdio.h>
#include<math.h>

int largestfactor( int );
int acceptable( int, int );
int makepalindrome( int);
int reversedigits( int );

int main()
{
	int i=999, n, l, max;
	while (i >= 0)
		{
			n=makepalindrome(i);
			l=largestfactor(n);
			if (acceptable(n,l)==0)
				{
					max=makepalindrome(i-1);
					i=i-1;
				}
			else
			{
				printf("%d",max);
				return 0;
			}
		}
printf("%d",max);
return 0;
}

int makepalindrome( int n )
{
	int m1=0,m2=0,m3=0,m=0;
	m1 = n%10;
	m2 = ((n-m1)%100)/10;
	m3 = ((n-(m1+10*m2))%1000)/100;
	m=100000*m3 + 10000*m2 + 1000*m1 + 100*m1 + 10*m2 + m3;
	return m;
}

int largestfactor( int s )
{
	float maxcheck,i,m=s,r;
	r=sqrt( s );
	maxcheck = floor( r );
	i=maxcheck;
	while (i>=1)
	{
		if(s / i - floor( s / i ) == 0)
		{
			return i;
		}
		else
		{
			i=i-1;
		}
	}	
}

int acceptable(int n, int i)
{
	if ( i < 1000 and n/i < 1000 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
