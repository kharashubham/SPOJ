/*
AUTHOR: shubhamkhara | Shubham Chaudhary
PROBLEM: TOANDFRO
DATE: 20-08-2015
*/

#include<stdio.h>
#include<string.h>

#define s(n)         scanf("%d",&n)
#define p(n)         printf("%d",n)
#define ss(n)        scanf("%s",n)

int main()
{
    int t, len;
    char arr[300];
    s(t);
    while(t)
    {
        ss(arr);
        len=strlen(arr)/t;
        char ans[len][t];
        int i,j,k=0;
        for(i=0;i<len;i++)
        {
            if(i%2)
            {
                for(j=t-1;j>=0;j--)
                   ans[i][j]=arr[k++];
            }
            else
            {
            for(j=0;j<t;j++)
            {
                ans[i][j]=arr[k++];
            }
            
            }
        }
        for(i=0;i<t;i++)
        {
            for(j=0;j<len;j++)
                printf("%c",ans[j][i]);
        }
        printf("\n");
        s(t);
    }
    return 0;
}