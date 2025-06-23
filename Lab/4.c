#include<stdio.h>
int main()
{
    int num1,num2,num3;
    char ch='%';
    printf("\n Enter a value of num1 : ");
    scanf("%d",&num1);
    printf("\n Enter a value of num2 : ");
    scanf("%d",&num2);
    printf("\n Enter a value of num2 : ");
    scanf("%d",&num3);

    printf("\n--- Arithmetic Operations ---");
    printf("\nadd of %d + %d =%d ",num1,num2,num1+num2);
    printf("\nsub of %d - %d =%d ",num1,num2,num1-num2);
    printf("\nmul of %d * %d =%d ",num1,num2,num1*num2);
    printf("\ndiv of %d / %d =%d ",num1,num2,num1/num2);
    printf("\nrem of %d %c %d =%d ",num1,ch,num2,num1%num2);


    printf("\n--- relational operations---");
    printf("\n== operator %d == %d = %d",num1,num2,num1==num2);
    printf("\n<= operator %d <= %d = %d",num1,num2,num1<=num2);
    printf("\n>= operator %d >= %d = %d",num1,num2,num1>=num2);
    printf("\n!= operator %d != %d = %d",num1,num2,num1!=num2);
    printf("\n< operator %d < %d = %d",num1,num2,num1<num2);
    printf("\n> operator %d > %d = %d",num1,num2,num1>num2);

    printf("\n --- Lofical oprations---");
    printf("\n%d <%d && %d <%d = %d",num1,num2,num1,num3,num1<num2&&num1<num3);
    printf("\n%d <%d || %d <%d = %d",num1,num2,num1,num3,num1<num2||num1<num3);

}