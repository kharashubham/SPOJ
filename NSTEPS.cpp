/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: NSTEPS
DATE: 18-08-2015
*/

#include <stdio.h>
#include <math.h>

#define s(n)         scanf("%d",&n)
#define sc(n)        scanf("%c",&n)
#define sl(n)        scanf("%lld",&n)

#define p(n)         printf("%d",n)
#define pc(n)        printf("%c",n)
#define pl(n)        printf("%lld",n)

#define MAX(a, b)     ( (a) > (b) ? (a) : (b) )
#define MIN(a, b)     ( (a) < (b) ? (a) : (b) )

#define limit 10000

int main()
{
    int t, x, y, out;
    s(t);
    
    while(t--)
    {
        s(x);
        s(y);
        
        if (x <= limit && y <= limit)
        {
            if (x == y)
            {
                if (x % 2 == 0)
                    out = (x/2)*4;
                else
                    out = ((x/2)*4) + 1;
                
                p(out);
                printf("\n");
            }
            else if (x-y == 2)
            {
                    if (x % 2 == 0)
                        out = (x-1)*2;
                    else
                        out = ((x-2)*2) + 1;
            
                p(out);
                printf("\n");
            }
            else
                printf("No Number\n");
        }
    
    }
    
    return 0;
}

