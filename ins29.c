//write a program to insertion sort.
#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,k,n,a[50],key;
     printf("Enter the size of an array");
     scanf("%d",&n);
     printf("enter thr element of an array");
     for(i=1;i<=n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(j=2;j<=n;j++)
      {
          key=a[j];
          i=j-1;
          while(i>0 && a[i]>key)
            {
                a[i+1]=a[i];
                i=i-1;
            }
        a[i+1]=key;
      }
    printf("Resultan array is :");
    for(i=1;i<=n;i++)
       {
           printf("%d\n",a[i]);
       }
       getch();
}

