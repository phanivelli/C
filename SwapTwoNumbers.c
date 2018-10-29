#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,temp;
    printf("enter the first and second number:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swap");
    printf("First integer = %d\nSecond integer = %d\n",a,b);

}