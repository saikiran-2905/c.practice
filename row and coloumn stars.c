#include<stdio.h>
int main()
{
 int row,col;
 printf("enter the number of rows and columns:\n");
 scanf("%d %d",&row,&col);
 for(int i=0;i<=row-1;i++)
 {
  for(int j=0;j<=col-1;j++)
  {
   if(i==0 || i==row-1 || j==0 || j==col-1)
   {
    printf("*");
   }
   else
   {
    printf(" ");
   }
  }
  printf("\n");
 }
 return 0;
}