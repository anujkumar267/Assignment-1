//33) WAP is a program to add two 6x6 matrices.


#include<stdio.h>
#include<conio.h>
void main(){
    int a[6][6],b[6][6],c[6][6],i,j;
    printf("Enter thr number to be First mattrix");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number to be second matrrix");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
          c[i][j]=a[i][j]+b[i][j];
          printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    getch();
}
    
