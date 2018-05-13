#include <stdio.h>
#include <conio.h>
struct info{
   char password[50];
}user;
int main(){
    char c,c1;
printf("\nEnter your password: ");
          for(int i=0;;i++){
          c=getch();
          if(c==8){
            if(i>0){
                top:
                    i--;
               user.password[i]=' ';
                printf("\b \b");
                c1=getch();
                if(c1==8){
                    goto top;
                }
                else if(c1==13){
                    user.password[i]='\0';
                }
                printf("*");
                user.password[i]=c1;
            }
          }

        else if(c==13){
          user.password[i]='\0';
         break;}
         else{
             printf("*");
          user.password[i]=c;
         }
    }

   printf("\n");
   puts(user.password);
   }
