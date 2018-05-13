#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <windows.h>
#include <string.h>
struct Info{

    char nam[50];
    int Id;
    float total;
    float monthly_income;
    float expenses[5];
    float array_sum;
    float house_rent;
    float internet_bill;
    float expenses_percentage[5];
    float suggest[3];
    float reduce[5];
    char password[50];
    char password_confirm[50];
}user;





void cursor_position(int x,int y){
    COORD coord;
     coord.X=x;
       coord.Y=y;
          SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}




int main()
{   system("color 3f");
    int sizee,speeed;
    cursor_position(42,12);
    printf("         Life Hacks");

    cursor_position(42,14);
    for(sizee=1;sizee<=30;sizee++){

        for(speeed=0;speeed<=19000000;speeed++){

        }
         printf("%c", 177);
    }
char c,c3;



   system("cls");
  int pr = 0;//talha start
    printf("WELCOME!! This is Life Hacks \n your guide to a better life \n Have you ever thought about how you are gonna go through the month? \n Or at the end of the month have you wondered how you are  in a tight position with such little money? \n How could you have utilized the amount you had? \n well,worry no more! \n Life Hacks will lead you there\n");
    for(;pr<168;pr++)
        printf("_"); //talha end

     printf("\n");



char scan;/*variable for proceed and exit*/
      do
    {
        printf("\nplease press 1 to proceed and 0 to exit\n"); /*if the user gives wrong value it will repeatedly ask fo zero or one*/
      //  scanf("%c",&scan);
      scan=getche();
    }
    while(scan!='1' && scan!='0');
    if(scan=='0')
    {
        return 0;
    }
    else if(scan=='1')
    {
int j;
         printf("\nEnter your name: ");
          scanf(" %[^\n]",&user.nam);
          printf("\nEnter your password: ");
          level2:
          for(int i=0;;i++){
          c=getch();
          if(c==8){
            if(i>0){
                top:
                    i--;
                    if(i<0)
                        goto level2;
               user.password[i]=' ';
                printf("\b \b");
                c3=getch();
                if(c3==8){
                    goto top;
                }
                else if(c3==13){
                    user.password[i]='\0';
                    break;
                }
                printf("*");
                user.password[i]=c3;
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

     printf("\nConfirm password: ");
     char c2;
     thikkorilevel:
 for(int i=0;;i++){
          c=getch();
          if(c==8){
            if(i>0){
                toph:
                    i--;
                    if(i<0)
                        goto thikkorilevel;
               user.password_confirm[i]=' ';
                printf("\b \b");
                c2=getch();
                if(c2==8){
                    goto toph;
                }
                else if(c2==13){
                    user.password_confirm[i]='\0';
                    break;
                }
                printf("*");
                user.password_confirm[i]=c2;
            }
          }

        else if(c==13){
          user.password_confirm[i]='\0';
         break;}
         else{
             printf("*");
          user.password_confirm[i]=c;
         }
    }
   if(strcmp(user.password,user.password_confirm)!=0)
   {

       printf("\nPasswords don't match.\nEnter your password again :");
       goto level2;
   }



   printf("\nEnter your Id: ");
   scanf("%d",&user.Id);
     printf("\n\nplease type your estimated values as the following sequence : \n"
             "1.Food cost---daily\n"
             "2.Electricity Usage---daily unit\\1unit==8tk\n"
             "3.Transportation Cost---daily\n"
             "4.Internet bill---monthly\n"
             "5.House rent----monthly\n");
     for(int a = 0;a<5;a++)
     {   printf("%d->",a+1);
         scanf("%f",&user.expenses[a]); //getting the inputs from user
     }
    }
    user.expenses[0]=user.expenses[0]*30;
    user.expenses[1]=user.expenses[1]*8*30;
    user.expenses[2]=user.expenses[2]*30;
system("cls");

        for(int k =0;k<5;k++)
        {
            user.array_sum = user.array_sum + user.expenses[k];
        }

    user.total = user.array_sum;




    for(int p = 0;p<5;p++)
    {

    user.expenses_percentage[p] = (user.expenses[p]*100)/user.total; //perccentage for inputs given stored in an array
    }

   //system("cls");


   printf("------------------------------------To see results please Login------------------------------------");
   level:
       system("cls");
       printf("------------------------------------To see results please Login------------------------------------");
   int Id;
   char a[50];
   char c1;
   printf("\n\nEnter Id: ");
   scanf("%d",&Id);
   printf("\nEnter password: ");
   thikkorilevel2:
   for(int i=0;;i++){
          c=getch();
          if(c==8){
            if(i>0){
                downtop:
                    i--;
                    if(i<0)
                        goto thikkorilevel2;
                  a[i]=' ';
                printf("\b \b");
                c1=getch();
                if(c1==8){
                    goto downtop;
                }
                else if(c1==13){
                    a[i]='\0';
                    break;
                }
                printf("*");
                a[i]=c1;
            }
          }

        else if(c==13){
          a[i]='\0';
         break;}
         else{
             printf("*");
          a[i]=c;
         }
    }





//user.house_rent=user.expenses[4];
//user.internet_bill=user.expenses[3];





    if(Id==user.Id&&strcmp(a,user.password)==0){

     printf("\nLogin Approved");
      printf("\nWelcome! %s",user.nam);
    printf("\nId: %d",user.Id);
     //printf("\nPassword: %s\n\n",user.password);
     printf("\n\nYour total estimated monthly expense is %.2f  taka\n",user.total); //reduced 0
    printf("1->food cost=%.2f tk. It is  %.2f  percent of your total cost\n",user.expenses[0],user.expenses_percentage[0]);
    printf("2->electricty Bill=%.2f tk. It is %.2f percent of your total cost\n",user.expenses[1],user.expenses_percentage[1]);
    printf("3->Transportation cost=%.2f tk. It is %.2f  percent of your total cost\n",user.expenses[2],user.expenses_percentage[2]);
    printf("4->house rent=%.2f tk is fixed and is %.2f  of your total cost\n",user.expenses[3],user.expenses_percentage[3]);
    printf("5->internet bill=%.2f tk is fixed and is %.2f  of your total cost\n",user.expenses[4],user.expenses_percentage[4]);

  //system("cls");
    float mb,df,lld;
    float final[3];
    printf("Enter your maximum budget for this month: ");
    scanf("%f",&mb);
    if( mb<=user.expenses[0] || mb<=user.expenses[1] || mb<=user.expenses[2] || mb<=user.expenses[3] || mb<=user.expenses[4])
    {
        printf("\nYou should earn more :( \n");
    }
    else if(user.total>mb){
            df=user.total-mb;
        printf("You need to reduce your budget :( \n");
        printf("You need extra %.2f tk to execute this plan",df);
        lld=user.expenses_percentage[0]+user.expenses_percentage[1] +user.expenses_percentage[2];
        user.suggest[0]=(df*user.expenses_percentage[0])/lld;
        user.suggest[1]=(df*user.expenses_percentage[1])/lld;
        user.suggest[2]=(df*user.expenses_percentage[2])/lld;
        printf("\nFood cost %.2f \nElectricity bill %.2f \nTransportation Cost %.2f ",user.suggest[0],user.suggest[1],user.suggest[2]);
        for(int r =0;r<3;r++)
        {
            final[r]= (user.expenses[r]-user.suggest[r])/30;
        }
            printf("\n\nReduced Plan\n");
            printf("1->Food Cost(daily) :%.2f taka\n",final[0]);
            printf("2->Electricity Usage(daily) :%.2f unit\n",final[1]/8);
            printf("3->Transportation cost(daily) :%.2f taka\n",final[2]);
            printf("4->Internet bill is %.2f unchanged\n",user.expenses[3]);
            printf("5->House rent is %.2f unchanged\n",user.expenses[4]);

           printf("\n\nYour plan\n");

             printf("1->Food Cost(daily) :%.2f taka\n",user.expenses[0]/30);
            printf("2->Electricity Usage(daily) :%.2f unit\n",(user.expenses[1])/(30*8));
            printf("3->Transportation(daily) :%.2f taka\n",user.expenses[2]/30);
            printf("4->Internet bill is %.2f \n",user.expenses[3]);
            printf("5->House rent is %.2f \n",user.expenses[4]);



    }
    else{
        printf("\nYou don't need to change your plan :D ");
    }

    }
    else{
            int l;
            printf("            \nAccess denied\n");
            printf(" press 1 to retry and 0 to exit ");
            scanf("%d",&l);
            if(l==1){
                system("cls");
                goto level;

            }
            else if(l==0){
                return 0;
            }
    }






    }






























