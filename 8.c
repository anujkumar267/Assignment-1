//If the ages of A, B and C are input through the keyboard, write a program to determine
//the youngest of the three.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enetr the value:\n");
    printf("a\t=\t");
    scanf("%d",&a);
    printf("b\t=\t");
    scanf("%d",&b);
    printf("c\t=\t");
    scanf("%d",&c);
    if(a>b)
      {
        if(a>c)
          {
            printf("Youngest is=%d",a);
          }
        else
           {
            printf("Youngest is =%d",c);
           }
      }
    else { if(b>c)
           {
            printf("Youngest is=%d",b);
           }
          else
             {
                printf("Youngest is =%d",c);
             }
        }
        getch();
  }
