/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: PRIME1
DATE: 16-08-2015
*/

#include <cstdio>
#include <cmath>

#define s(n)         scanf("%d",&n)
#define sc(n)        scanf("%c",&n)
#define sl(n)        scanf("%lld",&n)

#define p(n)         printf("%d",n)
#define pc(n)        printf("%c",n)
#define pl(n)        printf("%lld",n)

int isprime(int a)
{
	int p,flag=1;

 	if(a > 1)
 	{
 		for(p=2;p<=sqrt(a);p++)
 		{ 
   			if(a%p==0)
   			{
   				flag=0;
   				break;
 			} 
 		}
 	}
 	else
 		flag = 0;
 	
return flag; 
}



int main()
{
	int i,j,t,n,m,k;
	s(t);
 
 	while(t--)
    {
    	s(m);
    	s(n);
    	for(j=m;j<=n;j++) 
       	{
       		k=isprime(j);
       		if(k==1)
       		{	
       			p(j); 
       		    printf("\n");
       		}
       	}
    printf("\n");
    }
 return 0;
}





