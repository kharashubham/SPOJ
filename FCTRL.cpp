/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: FCTRL
DATE: 16-08-2015
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

int main()
{
    int t, a, j, num, div, out;
    s(t);
    
    while(t--)
    {
        s(num);
        a = j = 1;
        out = 0;
        while(a)
        {
            div = pow(5,j);
            a = num/div;
            out += a;
            j++;
        }
        p(out);
        printf("\n");
    }
    return 0;
}

