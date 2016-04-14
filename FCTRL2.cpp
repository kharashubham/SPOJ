/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: FCTRL2
DATE: 16-08-2015
*/

#include <stdio.h>
int main()
{ 
    int a[200],t,n,i,j,k,v,r,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {   
        scanf("%d",&n);
        a[0]=1;
        m=1;
        for(j=2;j<=n;j++)
        {  
        	r=0;
        	for(k=0;k<m;k++)
        	{  
        	   v=((a[k]*j)+r)%10;
        	   r=((a[k]*j)+r)/10;
        	   a[k]=v;
        	}
        	while(r)
	        {
	         a[m]=r%10;
	         r/=10;
	         m++;
	        }
        }
      for(j=m-1;j>=0;j--)
      printf("%d",a[j]);
      printf("\n");
    }  
return 0;
} 