/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: FASHION
DATE: 20-08-2015
*/

#include <cstdio>
#include <algorithm>

#define s(n)         scanf("%d",&n)
#define p(n)         printf("%d",n)

int main()
{
    int t, n, a[10000], b[10000], i, out;
    s(t);
    while(t--)
    {
        out = 0;
        s(n);
        for (i = 0; i < n; i++)
            s(a[i]);
        for (i = 0; i < n; i++)
            s(b[i]);
        
        std::sort(a, a+n);
        std::sort(b, b+n);
        
        for (i = 0; i < n; i++)
            out += (a[i]*b[i]);
        
        p(out);
        printf("\n");
    }
    
    return 0;
}