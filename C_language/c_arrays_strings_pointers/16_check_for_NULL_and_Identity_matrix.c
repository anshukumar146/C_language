#include<stdio.h>
int main(){
int n,i,j,m,counter=0;
printf("Enter the size of array:\n");             //Ask user for size of array.
scanf("%d",&n);
int arr1[n][n],sum=0;

printf("enter the element of  array:\n");          //Input element of  array.
for(i=0; i<n;i++)
{for(j=0;j<n;j++)
  { scanf("%d",&arr1[i][j]);}
}
printf("select form option:\n");              //Ask for selection.
printf("1.Check for NULL matrix of n x n matrix\n");
printf("2.Check for Identity matrix of n x n matrix\n");
scanf("%d",&m);
switch (m)
{
case 1:   //check for NULL matrix.
  for(i=0; i<n;i++)
{for(j=0;j<n;j++)
  { if(arr1[i][j]==0)
  counter++;}
}
if(counter==(n*n))
printf("Its a NULL matrix");
else{printf("Its not a NULL matrix \n");}
  break;

  case 2:       //check for Identity matrix.
  for(i=0; i<n;i++)
{
  {if(arr1[i][i]==1)
  counter++;
}}
if(counter==n)
{printf("Its a Identity matrix");}
else{printf("Its not a Identity matrix");}
  break;

default:
  break;
}
return 0;
}