#include<stdio.h>
int main()
{
    int pn=1000000000,i,j,n,m,k; //n=total number ,i= initial array index,j=multiplier

int prime[1000000005];
    for(i=2;i<=pn;i++)
    {
        prime[i]=i;
    }
    for(i=2;i*i<pn;i++)
    {
        if(prime[i]!=0)
            {for(j=2;j<pn;j++)
            {
                if (prime[i]*j>pn)
                    break;
                else
                    prime[prime[i]*j]=0;
            }
            }

    }
     printf("Enter the numbers with space::");
    scanf("%d %d",&m,&n);

    for(k=m;k<n;k++)
    {
        if(prime[k]!=0)
            printf("%d\n",prime[k]);
    }
    return 0;
}
