/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: AE00
DATE: 28-08-2015
*/


#include <stdio.h>
#include <math.h>

#define s(n)         scanf("%d",&n)
#define p(n)         printf("%d",n)

int main()
{
    int n, i, j, out = 0, sroot;
    s(n);
    sroot = sqrt(n);
    for (i = 2; i <= sroot; i++)
    {
        j = i;
        while (1)
        {
            if ((i*j) <= n)
                out++;
            else
                break;
            
            j++;
        }
    }
    p(out+n);
    
    return 0;
}