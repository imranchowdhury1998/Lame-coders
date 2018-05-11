#include <stdio.h>
#include <conio.h>
//#include <process.h>
#include <windows.h>
#include <string.h>
struct Info{
    char name[50];
    int Id;
    char password[50];
}user;
void cursor_position(int x,int y){
    COORD mesobagh;
     mesobagh.X=x;
       mesobagh.Y=y;
          SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mesobagh);
}
int main()
{   char c;
    int sizee,speeed;
    cursor_position(42,12);
    printf("         Life Hacks");

    cursor_position(42,14);
    for(sizee=1;sizee<=30;sizee++){

        for(speeed=0;speeed<=100000000;speeed++){

        }
         printf("%c", 177);
    }
   system("cls");

   printf("Enter your name: ");
   gets(user.name);
   printf("\nEnter your password: ");
   for(int i=0;;i++){
    c=getch();
    printf("*");
    user.password[i]=c;
    if(c==13){
        user.password[i]='\0';
        break;
    }
   }

   printf("\nEnter your Id: ");
   scanf("%d",&user.Id);
  /* printf("\nName: %s",user.name);
    printf("\nId: %d",user.Id);
     printf("\nPassword: %s\n\n",user.password);*/

   system("cls");
   int Id;
   char a[50];
   char c1;
   printf("------------------------------------Login------------------------------------");
   printf("\n\nEnter Id: ");
   scanf("%d",&Id);
   printf("\nEnter password: ");
   for(int j=0;;j++){
    c1=getch();
    printf("*");
    a[j]=c1;
    if(c1==13){
        a[j]='\0';
        break;
    }
   }
  // printf("\n%d",strcmp(a,user.password));
   if(Id==user.Id&&strcmp(a,user.password)==0){
    printf("\nLogin Approved");
      printf("\nName: %s",user.name);
    printf("\nId: %d",user.Id);
     printf("\nPassword: %s\n\n",user.password);
   }


}
