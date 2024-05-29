#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANDIDATE1 "VINAY HM"
#define CANDIDATE2 "VEERAJ K"
#define CANDIDATE3 "UDIT GAUR"
#define CANDIDATE4 "NAYANA HM"
typedef struct voter_information
{
    char name[50];
    char uniqe_code[50];
    char age[50];
    struct voter_information *next;
}node;
int choice,q,s,r,t,w,R=3;
node *top;
node *begin,*initial=NULL;
node *voter_information(node *);
node *main1(node *);
node *find(char x[],char y[],char z[],node *,int *);
int vote1=0,vote2=0,vote3=0,vote4=0;
void admin();
int CAST_YOUR_VOTE();
int CURRENT_VOTE_COUNT();
int FINAL_RESULTS();
void admin();
void not_again();
void stop();
int main()
{
    while(1){
    printf("\t            ******  WELCOME  TO  ONLINE  VOTING  PORTAL  SYSTEM ******        \n\n");
    printf("\t          *****  Please  Enter  1  for  logging  vote  main  Logs *****    \n\n\n");
    int select;
    scanf("%d",&select);
    if(select==1)
    {
      initial=main1(initial);
    }
}
    return 0;
}
node *main1(node *initial)
{   printf("\n\n\n");
    printf("1. FOR  VOTE  ENTRY     \n\n");
    printf("2. FOR  ADMIN  PANEL    \n\n");
    printf("3. FOR  WINNER         \n\n");
    printf("\tIF  YOUR  CREDENTIALS  MATCHES  WITH  THOSE  IN  THE  VOTER  LIST  THEN  ONLY  YOU  CAN  GIVE  YOUR  VOTE  OTHERWISE  YOU  CAN   NOT \n\n\n");
    printf("\t ****So Please Enter****\n\n\n");
    int A;
    scanf("%d",&A);
    if(A==1)
    {
       initial= voter_information(initial);
    }
    if(A==2)
    {
      admin();
    }
    if(A==3)
    {
      FINAL_RESULTS();
    }
    if(A!=1||A!=2||A!=3)
    {
      main1(initial);
    }
  return initial;
}
node *voter_information(node *initial)
{
    int UNIVERSAL=0;
int *z;
 z = &UNIVERSAL;
     node *temp;
     char name[50],uniqe_code[15],age[20];
     system("cls");
     printf("\n\n\n\n");
     printf("\t IF  YOUR  UNIQUE  ID,  YOUR  NAME  AND  YOUR  AGE MATCHES  THEN  ONLY  YOU  CAN  GIVE  YOUR  VOTE  OTHERWISE  YOU  CANNOT\n\n");
     printf("\t\t\t ID YOU DO WRONG %d TIMES, THE PORTAL WILL BE CLOSED AUTOMATICALLY\n\n\n",R);
     printf("\t\tPlease \n");
     printf("\t\t\t Enter  your  uniqe  ID ");
     gets(uniqe_code);
     gets(uniqe_code);
     printf("\t\t\t Enter  Your  NAME ");
     gets(name);
     printf("\t\t\t Enter  YOUR  AGE ");
     gets(age);
     temp=(node *)malloc(sizeof(node));
     strcpy(temp->uniqe_code,uniqe_code);
     strcpy(temp->name,name);
     strcpy(temp->age,age);
     temp->next=NULL;
     top=temp;
     while(temp!=NULL)
     {
         if((strcmp(temp->uniqe_code,"101")==0&& strcmp(temp->name,"Vinay")==0 &&strcmp(temp->age,"22")==0) ||
         (strcmp(temp->uniqe_code,"102")==0&& strcmp(temp->name,"Vikas")==0 &&strcmp(temp->age,"32")==0)||
         (strcmp(temp->uniqe_code,"103")==0&& strcmp(temp->name,"Virat")==0 &&strcmp(temp->age,"25")==0)||
         (strcmp(temp->uniqe_code,"104")==0&& strcmp(temp->name,"Rohit")==0 &&strcmp(temp->age,"26")==0)||
         (strcmp(temp->uniqe_code,"105")==0&& strcmp(temp->name,"Aniket")==0 &&strcmp(temp->age,"29")==0)||
         (strcmp(temp->uniqe_code,"106")==0&& strcmp(temp->name,"Surya")==0 &&strcmp(temp->age,"31")==0)||
         (strcmp(temp->uniqe_code,"107")==0&& strcmp(temp->name,"Hardik")==0 &&strcmp(temp->age,"36")==0)||
         (strcmp(temp->uniqe_code,"108")==0&& strcmp(temp->name,"Rahul")==0 &&strcmp(temp->age,"39")==0)||
         (strcmp(temp->uniqe_code,"109")==0&& strcmp(temp->name,"Subhman")==0 &&strcmp(temp->age,"29")==0)||
         (strcmp(temp->uniqe_code,"110")==0&& strcmp(temp->name,"Polly")==0 &&strcmp(temp->age,"33")==0))
          {
            int R=3;
            initial=find(temp->uniqe_code,temp->name,temp->age,initial,&UNIVERSAL);

            if(UNIVERSAL==0)
            {
             s=CAST_YOUR_VOTE();
            }
            else
             {
                not_again();
             }
           }
         else
            {
              R--;
         if(R==0)
         {
            printf("YOu entered login details false three in a row!!!!!Wait antile admin allows you to vote!!!");
            admin();
            break;
         }
         printf("\n\n\n\n");
         printf("\tYour  AADHAR  ID  or  NAME  or  DATE  OF  BIRTH  is  wrong\n\n");
        
         printf("\t\t\t Plz  Re - Enter \n\n");
        
         system("pause");
        initial= main1(initial);
            }
            temp=temp->next;
     }
     return initial;
}
int CAST_YOUR_VOTE(){
  {
    int s;
    int select;
    printf("\n \t\t\t  THE  CANDIATES  LIST  \n ");
    printf("\t\t\t 1.%s\t\t BULLS EYE \n \t\t\t 2.%s \t\t ARCHERY \n \t\t\t 3.%s\t\tRAINBOW \n \t\t\t 4.%s\t\t CYCLE\n",CANDIDATE1,CANDIDATE2,CANDIDATE3,CANDIDATE4);
    printf("\t\tENTER  TO  CHOICE  TO  VOTE\n");
    scanf("%d",&select);
    switch(select){
        case 1: if(select==1){
            printf("YOU  SELECTED  CANDIDATE 1\n");
            printf("THANKS  FOR  VOTING");
            vote1++;}
            break;
        case 2: if(select==2){
            printf("YOU  SELECTED  CANDIDATE 2\n");
            printf("THANKS  FOR  VOTING");
            vote2++;}
            break;
        case 3: if(select==3){
            printf("YOU  SELECTED  CANDIDATE 3\n");
            printf("THANKS  FOR  VOTING");
            vote3++;}
            break;
        case 4: if(select==4){
            printf("YOU  SELECTED  CANDIDATE 4\n");
            printf("THANKS  FOR  VOTING");
            vote4++;}
            break;
        default:printf("INVALID CHOICE ENTERED");
        getchar();
    }}
}
void admin()
 {
     int B;
     printf("\n\n\n\n");
     printf("\t\t\t\t\tEnter  Password  To  Unlock  The  Admin  Panel\n\n");
     scanf("%d",&B);
     if(B==72045)
     {
        int s;
        CURRENT_VOTE_COUNT();
        }
     else
     {
         printf("Wrong Password\n");
     }
 }

int CURRENT_VOTE_COUNT(){
  int s;
  int e;
    printf("\n");
    printf("\t CURRENT  VOTE  COUNT  OF %s  IS %d\n\n ",CANDIDATE1,vote1);
    printf("\t CURRENT  VOTE  COUNT  OF %s  IS %d\n\n",CANDIDATE2,vote2);
    printf("\t CURRENT  VOTE  COUNT  OF %s  IS %d\n\n ",CANDIDATE3,vote3);
    printf("\t CURRENT  VOTE  COUNT  OF %s  IS %d\n\n ",CANDIDATE4,vote4);
    getchar();
    printf("Enter  the  password  to  exit  portal");
    scanf("%d",&e);
    if(e!=3434)
    {
      main1(initial);
    }
    else{
      exit(0);
    }
    getchar();

}
void not_again()
   {
        int A;
        system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t        ***YOU HAVE GIVEN YOUR VOTE SUCCESSFULLY***       \n\n\n");
        printf("\t\t\t        ***YOU CANNOT GIVE YOUR VOTE MORE THAN ONCE***     \n\n\n");
        printf("\t\t\t If You want to see present winner Enter One(1) or Enter Any Other Key for Main  Logs\n\n");
        scanf("%d",&A);
        if(A==1)
        {
          FINAL_RESULTS();
        }
        else
        {
          main1(initial);
        }
   }

int FINAL_RESULTS(){
  system("cls");
int r;
if(vote2<vote1 && vote3< vote1 && vote4<vote1 ){
printf("\t\t\tThe present Winner is %s and he has got %d votes\n\n\n\n",CANDIDATE1,vote1);}
if(vote1<vote2 && vote3< vote2 && vote4<vote2 ){
printf("\t\t\tThe present Winner is %s and he has got %d votes\n\n\n\n",CANDIDATE2,vote2);}
if(vote1<vote3 && vote2< vote3 && vote4<vote3 ){
printf("\t\t\tThe present Winner is %s and he has got %d votes\n\n\n\n",CANDIDATE3,vote3);}
if(vote1<vote4 && vote2< vote4 && vote3<vote4 ){
printf("\t\t\tThe present Winner is %s and she has got %d votes\n\n\n\n",CANDIDATE4,vote4);}
}

void stop()
   {
       printf("\n\n\n\n");
       printf("\t\t\t (:-YOU ENTERED WRONG CREDENTIALS FOR 3 TIMES IN A ROW :) \n\n\n");
       printf("\t\t\t PlEASE try again \n\n\n");
       printf("\t\t\t Thank You  \n\n\n");
       printf("press any key");
}

node *find(char x[],char y[],char z[],node *initial,int *Y)
{
     *Y=0;
  node *w,*begin;
  if(initial==NULL)
  {
      begin=(node*)malloc(sizeof(node));
     strcpy(begin->uniqe_code,x);
     strcpy(begin->name,y);
     strcpy(begin->age,z);
      initial=begin;
      begin->next=NULL;
}
  else
  {
    w=initial;
      while(w!=NULL)
       {
          if((strcmp(w->uniqe_code,x)==0&& strcmp(w->name,y)==0 &&strcmp(w->age,z)==0))
          {
            *Y=1;
            break;
          }
              w=w->next;
        }
          if(*Y==0)
          {
            begin=(node*)malloc(sizeof(node));
            strcpy(begin->uniqe_code,x);
            strcpy(begin->name,y);
            strcpy(begin->age,z);
            w=begin;
            begin->next=NULL;
}}return initial;}


