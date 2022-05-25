//6) WAP to find whether the year is leap or not ( Do this with conditional operators)

#include<stdio.h>
#include<conio.h>
void main(){
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if(year%4==0){
        printf("This year is leap year");
    }
    else{
        printf("Thsi is not leap year");
    }
    getch();
}
