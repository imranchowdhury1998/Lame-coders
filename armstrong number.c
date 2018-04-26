#include <stdio.h>
int arm(int *a){
  int b,sum;
  b=*a%10;
  *a=*a/10;
  if(*a==0){
    return b*b*b;
  }
 return sum=b*b*b+arm(a);

}
int main()
{
    int a,*b;
    scanf("%d",&a);
    b=&a;
    printf("%d",arm(&a));
   if(arm(&a)==*b){
        printf("its an armstrong number");
    }
    else{
        printf("no no no");
    }
}
