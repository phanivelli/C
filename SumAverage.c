#include<stdio.h>
#include<conio.h>
void main()
{
    /* code */
    float a,b,c,sum,avg;
    printf("Enter the three numbers=");
    scanf("%f%f%f",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("sum of three numbers: %.2f\n",sum);
    printf("average of three numbers is: %.2f\n",avg);
}
