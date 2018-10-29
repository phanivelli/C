#include<stdio.h>
#include<conio.h>
void main(){
    int num,i,range;
    printf("enter the number to print multipliaction table:");
    scanf("%d",&num);
    printf("enter the range");
    scanf("%d",&range);
    for( i=1;i<=range;i++ ){
        printf("%d * %d= %d \n",num,i,num*i);
    }
    getch();
}