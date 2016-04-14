/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: CANDY
DATE: 20-08-2015
*/

#include <stdio.h>

#define s(n)         scanf("%d",&n)
#define p(n)         printf("%d",n)

int main()
{
    int sum, n, a[10000], i, avg, ans;
    while(1)
    {
        s(n);
        ans = sum = 0;
        if(n != -1)
        {
            for (i = 0; i < n; i++)
            {
                s(a[i]);
                sum += a[i];
            }
            if (sum%n != 0)
                printf("-1\n");
            else
            {
                avg = sum/n;
                for (i = 0; i < n; i++)
                    if(avg > a[i])
                        ans += (avg - a[i]);
                p(ans);
                printf("\n");
            }
        }
        else
        	break;

    }

    return 0;
}