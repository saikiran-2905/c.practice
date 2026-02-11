#include <stdio.h>
int main() {
int a,b,c;
printf("enter the no.of tea and candy: \n");
scanf("%d%d",&a,&b);
if (a<5||b<5)
{
    printf("0");
}
else if (a>=2*b || b>=2*a)
{
    printf("2");
}
else
{
    printf("1");
}
    return 0;
}