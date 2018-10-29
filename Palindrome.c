#include<stdio.h>
int main(){
    int num,rem,sum=0,temp;
    printf("enter the number:");
    scanf("%d",num);

    temp=num;
    while(num!=0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }

    if(temp== sum)
        printf("%d is palindrome",temp);
    else
        printf("%d is not palindrome",temp);
    return 0;
}