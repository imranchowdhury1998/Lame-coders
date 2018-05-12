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
    float reduce[3];
    char password[50];
}user;





void cursor_position(int x,int y){
    COORD coord;
     coord.X=x;
       coord.Y=y;
          SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}




int main()
{   char c;
   /* int sizee,speeed;
    cursor_position(42,12);
    printf("         Life Hacks");

    cursor_position(42,14);
    for(sizee=1;sizee<=30;sizee++){

        for(speeed=0;speeed<=100000000;speeed++){

        }
         printf("%c", 177);
    }




   system("cls"); */
  int pr = 0;//talha start
    printf("WELCOME!! This is Life Hacks \n your guide to a better life \n Have you ever thought about how you are gonna go through the month? \n Or at the end of the month have you wondered how you are  in a tight position with such little money? \n How could you have utilized the amount you had? \n well,worry no more! \n Life Hacks will lead you there\n");
    for(;pr<168;pr++)
        printf("_"); //talha end

     printf("\n");



int scan;/*variable for proceed and exit*/
      do
    {
        printf("please type 1 to proceed and 0 to exit\n"); /*if the user gives wrong value it will repeatedly ask fo zero or one*/
        scanf("%d",&scan);
    }
    while(scan!=1 && scan!=0);
    if(scan==0)
    {
        return 0;
    }
    else if(scan==1)
    {

         printf("Enter your name: ");
          scanf(" %[^\n]",&user.nam);
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
   printf("Enter your monthly income:\n");
    scanf("%f",&user.monthly_income);
     printf("please type your estimated values like following sequence : \n"
             "1.Food\n"
             "2.Electricity Bill\n"
             "3.Education Cost\n"
             "4.Internet bill\n"
             "5.house rent\n");
     for(int a = 0;a<5;a++)
     {   printf("%d .",a+1);
         scanf("%f",&user.expenses[a]); //getting the inputs from user
     }
    }


        for(int k =0;k<5;k++)
        {
            user.array_sum = user.array_sum + user.expenses[k];
        }

    user.total = user.array_sum;

    printf("your total estimated expense is %f taka\n",user.total);
    user.house_rent=user.expenses[4];
user.internet_bill=user.expenses[3];

 float real_income = user.monthly_income - user.house_rent - user.internet_bill; /*real income means after paying house rent and net bill the actual amount usable*/
    for(int p = 0;p<3;p++)
    {

    user.expenses_percentage[p] = (user.expenses[p]*100)/real_income; //perccentage for inputs given stored in an array
    }
    user.expenses_percentage[3]=(user.expenses[3]*100)/user.total;
    user.expenses_percentage[4]=(user.expenses[4]*100)/user.total;

   system("cls");

       int Id;
   char a[50];
   char c1;
   printf("------------------------------------To see results please Login------------------------------------");
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











    if(Id==user.Id&&strcmp(a,user.password)==0){
     printf("\nLogin Approved");
      printf("\nName: %s",user.nam);
    printf("\nId: %d",user.Id);
    printf("\nPassword: %s\n\n",user.password);
    printf("1**house rent is fixed and is %.2f of your total cost\n",user.expenses_percentage[3]);
    printf("2**internet bill is fixed and is %.2f of your total cost\n",user.expenses_percentage[4]);
    printf("3**The Leftover Money is %.2f \n",real_income);
    printf("4**food is %f percentage of your total cost\n",user.expenses_percentage[0]);
    printf("5**electricty is %f percentage of your total cost\n",user.expenses_percentage[1]);
    printf("6**education is %f percentage of your total cost\n",user.expenses_percentage[2]);

  //  printf("\n\nplease provide your monthly income so we can give you suggestion\n");
 //   scanf("%f",&user.monthly_income);


    if(user.total>user.monthly_income && real_income>0)
    {
        printf("you need to reduce your expenses ");
        printf( "i can provide you a plan if you tell me the percentage you want to expend on\n"
                "Food\n"
                "Electricity\n"
                "Education\n"
                 "respectively\n");
        scanf("%f %f %f",&user.reduce[0],&user.reduce[1],&user.reduce[2]);
        for(int n = 0;n<3;n++)
        {
          user.suggest[n]=(user.reduce[n]*real_income)/100; /*to make suggestion we will consider only real income*/
        }
        printf("you should expend %f taka in food\n",user.suggest[0]);
        printf(" you should expend %f taka in electricity\n",user.suggest[1]);
        printf("you should expend %f taka in education\n",user.suggest[2]);

    }
    else if(real_income<0 || real_income==0) /*this is beacuse if your monthly income is not enough to pay house rent and net bill*/
    {
        printf("you should earn more\n");
    }
    else if(user.total<user.monthly_income)
    {
        printf("you are fine to go with your plan goodluck\n");
    }
   system("cls");


    }}





























