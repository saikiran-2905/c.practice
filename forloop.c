#include <stdio.h>
int main() {
int num;
int r1;
int r2;
int count=0;
printf("enter the number \n");
scanf("%d",&num);
printf("enter the start point of range: \n");
scanf("%d",&r1);
printf("enter the end point of range: \n");
scanf("%d",&r2);
for(int i=r1; i<=r2;i++)
 {
    if(num%i==0)
    {
        count++;
    }
 }
    printf("count=%d",count);
    return 0;
}