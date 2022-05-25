//2) WAP to swap two variables with and without using third variable

#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Entet the value of b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The new valeue of  a :%d",a);
    printf("\nThe new valeue of  b :%d",b);
    getch();
}