/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: ADDREV
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

int reverse(int num)
{
    int rem, rev = 0;
    while (num)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }
    return rev;
}

int main()
{
    int t, num1, num2, rev1, rev2, out;
    s(t);
    while (t--)
    {
        s(num1);
        s(num2);
        
        rev1 = reverse(num1);
        rev2 = reverse(num2);
        
        out = rev1 + rev2;
        
        while (out%10 == 0)
            out /= 10;
        
        out = reverse(out);
        
        p(out);
        printf("\n");
        
    }
    
    return 0;
}