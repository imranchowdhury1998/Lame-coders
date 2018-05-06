#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;

bool prime[32000];
	void primes(){
		memset(prime,true,sizeof(prime));
		prime[0]=false;
		prime[1]=false;
		for(int i=2;i<sqrt(32000);i++){
			if(prime[i]){
				for(int j=i*i;j<32000;j+=i){
					prime[j]=false;
				}
			}
		}
		/*for(int i=2;i<(32000);i++){
			if(prime[i])cout<<i<<endl;
		}*/
	}
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
