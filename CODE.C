#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANDIDATE1 "VINAY HM"
#define CANDIDATE2 "VEERAJ K"
#define CANDIDATE3 "UDIT GAUR"
#define CANDIDATE4 "NAYANA HAMMIGIMATHAD"
typedef struct voter_information
{
    char name[50];
    char uniqe_code[50];
    char age[50];
}vote;
int choice,q,s,r,t,w;
int VOTER_INFO();
int CAST_YOUR_VOTE();
int CURRENT_VOTE_COUNT();
int FINAL_RESULTS();
int vote1=0,vote2=0,vote3=0,vote4=0;
int main(){
do{
printf(" \t\t\t\t     ### WELCOME TO ONLINE VOTING SYSTEM ###    \n\n");
printf(" \t\t\t\t *** PLEASE ENTER YOUR CHOICE ***  \n");
printf("\t\t ENTER 1 TO CAST YOUR VOTE \n ");
printf(" \t\t ENTER 2 TO FIND CURRENT VOTE COUNT\n");
printf(" \t\t ENTER 3 TO GET FINAL RESULTS \n ");
printf("\t\t ENTER 0 TO EXIT THE PORTAL \n");
scanf("%d",&choice);
    if(choice==1)
    {
        q= CAST_YOUR_VOTE();
    }
    if(choice==2)
    {
        s=CURRENT_VOTE_COUNT();
    }
    if(choice==3){
        r=FINAL_RESULTS();
    }
    if(choice>4){
        printf("invalid choice");
    }
    getchar();
    }while(choice!=0);
}

int CAST_YOUR_VOTE(){
    system("cls");
int q;
    printf("**\tIF ID, YOUR NAME AND YOUR AGE MATCHES THEN YOU ONLY CAN GIVE YOUR VOTE OTHERWISE NOT**\n");
    vote info;{
    char name[50];
    char unique_code[50];
    char age[50];
    printf("\t\tENTER YOUR NAME \n");
    scanf("%s",info.name);
    printf("\t\tENTER YOUR ID \n");
    scanf("%s",info.uniqe_code);
    printf("\t\tENTER YOUR AGE\n");
    scanf("%s", info.age);
    if((strcmp(info.name,"vinay")==0 && strcmp(info.uniqe_code,"1234")==0 && strcmp(info.age,"22")==0)||
    (strcmp(info.name,"dheeraj")==0 && strcmp(info.uniqe_code,"1001")==0 && strcmp(info.age,"21")==0)||
    (strcmp(info.name,"anvesh")==0 && strcmp(info.uniqe_code,"2001")==0 && strcmp(info.age,"20")==0)||
    (strcmp(info.name,"jayanth")==0 && strcmp(info.uniqe_code,"1423")==0 && strcmp(info.age,"20")==0)||
    (strcmp(info.name,"saiyad")==0 && strcmp(info.uniqe_code,"1235")==0 && strcmp(info.age,"20")==0)||
    (strcmp(info.name,"kunal")==0 && strcmp(info.uniqe_code,"1236")==0 && strcmp(info.age,"23")==0)||
    (strcmp(info.name,"shashank")==0 && strcmp(info.uniqe_code,"1254")==0 && strcmp(info.age,"25")==0)
    ){int select;
    printf("\n \t\t\t THE CANDIATES LIST  \n ");
    printf("\t\t\t 1.%s\t\t BULLS EYE \n \t\t\t 2.%s \t\t ARCHERY \n \t\t\t 3.%s\t\tRAINBOW \n \t\t\t 4.%s\t\t CYCLE\n",CANDIDATE1,CANDIDATE2,CANDIDATE3,CANDIDATE4);
    printf("\t\tENTER TO CHOICE TO VOTE\n");
    scanf("%d",&select);

    switch(select){
        case 1: if(select==1){
            printf("YOU SELECTED CANDIDATE 1\n");
            vote1++;}
            break;
        case 2: if(select==2){
            printf("YOU SELECTED CANDIDATE 2\n");
            vote2++;}
            break;
        case 3: if(select==3){
            printf("YOU SELECTED CANDIDATE 3\n");
            vote3++;}
            break;
        case 4: if(select==4){
            printf("YOU SELECTED CANDIDATE 4\n");
            vote4++;}
            break;
        default:printf("INVALID CHOICE ENTERED");
        getchar();
    }}
    else{
        printf("enter your details properly");}
        

}
}
int CURRENT_VOTE_COUNT(){
     system("cls");

    getchar();

    int s;

    printf(" \t \t \t CURRENT VOTE COUNT OF %s IS %d\n ",CANDIDATE1,vote1);

    printf("  \t \t \t CURRENT VOTE COUNT OF %s IS %d\n",CANDIDATE2,vote2);

    printf("   \t \t \t CURRENT VOTE COUNT OF %s IS %d\n ",CANDIDATE3,vote3);

    printf("    \t \t \t CURRENT VOTE COUNT OF %s IS %d\n ",CANDIDATE4,vote4);
    
}
int FINAL_RESULTS(){
     system("cls");

    getchar();
    
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

