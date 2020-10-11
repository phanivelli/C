#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("enter the number to check whether the number is even or odd=");
    scanf(" %d ", &num);
    num%2 ==0  ? printf("%d your number is even",num) : printf("%d your number is odd",num);
    return 0;
}