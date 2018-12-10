#include<stdio.h>
#include<conio.h>
void main(){
    char name[20],address[20],subjname[20];

    double avg;

    int noofsubjects,marks,sum=0;

    printf("Enter student name=");
    scanf("%s",name);

    printf("enter address of the student:");
    scanf("%s",address);

    // here we are entering the number of the subjects

    printf("enter the no of subjects=");
    scanf("%d",&noofsubjects);
     
    //  for loop is retreving the subjects untill the condition satisfies 
     for(int i=0;i<noofsubjects;i++){
         printf("enter the subject name=");
         scanf("%s",subjname);

         printf("enter the marks of subject=");
         scanf("%d",&marks);

        sum=marks+sum;
     }
     avg=sum/noofsubjects;

     printf("sum= %d\n",sum);
     printf("avg= %f\n",avg);

     if(avg>=70){
         printf("Distinction");
     }
     else if(avg<=60 && avg>70){
         printf("first class");
     }
     else if(avg<=50 && avg>60){
         printf("second class");
     }
     else if(avg<=40 && avg>50){
         printf("third class");
     }
     else{
         printf("fail");
     }



}