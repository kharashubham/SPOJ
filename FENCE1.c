/*
shubhamkhara | Shubham Chaudhary
PROBLEM: FENCE1
DATE: 25-04-2016
*/

#include  <stdio.h>
#define pi 3.1415926
int main() 
{
	int l;
	while(scanf("%d",&l))
	{
		if(l)
		{	
			float ans = (l*l)/(2*pi);
			printf("%.2f\n",ans);
		}
		else
		break;
	}
	return 0;
}