/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: TEST
DATE: 16-08-2015
*/

#include <stdio.h>

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
    int n;
    while (s(n))
    {
        if (n != 42)
        {
            p(n);
            printf("\n");
        }
        else
            break;
    }
    
    return 0;
}