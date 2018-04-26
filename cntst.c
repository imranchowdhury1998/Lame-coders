#include <stdio.h>
int main()
{
    long long int store[100];
    long long int n,k,M,D,i,c=0,m,l,d,p=0,s=0,j,g;
    scanf("%I64d %I64d %I64d %I64d",&n,&k,&M,&D);
    for(i=1;i<=M;i++){
            l=0;
            c=0;
        for(j=1;j<=D;j++){
            c+=i*k*j;
             if(c>=n){
                 l=j;
                break;
            }



        }

        store[p]=l*i;
        p++;
    }
   m=store[0];
    for(i=0;i<p;i++){
        if(store[i]>m){
            m=store[i];

        }
    }
printf("%I64d\n",m);

}
