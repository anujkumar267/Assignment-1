//1) WAP to find the area & perimeter of a rectangle

#include<stdio.h>
#include<conio.h>
void main(){
    int a,p,l,w;
    printf("Enter the Length:");
    scanf("%d",&l);
    printf("Enter the Width:");
    scanf("%d",&w);
    p=2*(l+w);
    printf("The perimeter of Rectangle=%d",p);
    a=l*w;
    printf("\nThe are of Rectangle =%d",a);
    getch();
}