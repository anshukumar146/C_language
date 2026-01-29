#include<stdio.h>
int main(){
    int i, j, k, l;
    
int matrix1[3][3],matrix2[3][3],matrix3[3][3];
printf("Enter the elements first matrix:\n");     //Get matrix1 element.
for(int i=0; i<3; i++)
{for(int j=0; j<3; j++)
scanf("%d",&matrix1[i][j]);
}
printf("Enter the elements second matrix:\n");     //Get matrix2 element.
for(int i=0; i<3; i++)
{for(int j=0; j<3; j++)
scanf("%d",&matrix2[i][j]);
}
for(int i=0; i<3; i++)                              //Multiplication of matrix.
{for(int j=0; j<3; j++){
    int sum=0;
    for(int k=0; k<3; k++)
        {for(int l=0; l<3; l++)
        sum=sum+matrix1[i][k]*matrix2[l][j];
    matrix3[i][j]=sum;}}}
  
printf("Resultant matrix:\n");                      //prints the result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", matrix3[i][j]);           // spacing
        }
        printf("\n");                               // new line after each row
    }

return 0;
}