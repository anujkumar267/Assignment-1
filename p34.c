//34) WAP to multiply any two 3x3 matrices.

#include<stdio.h>
#include<conio.h>
void main(){
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;
    printf("Enter thr number to be First mattrix");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number to be second matrrix");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0;
           for(k=0;k<3;k++){
               sum=sum+a[i][k]*b[k][j];
               c[i][j]=sum;
           }
            
        }
    }
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
}
getch();
}
