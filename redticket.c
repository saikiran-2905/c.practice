#include <stdio.h>
void main() {
    int a,b,c;
    printf("Enter the value in A:);
    scanf("%d",&a);
    printf("Enter the value in B:);
    scanf("%d",&b);
    printf("Enter the value in C:);
    scanf("%d",&c);
    int ab=a+b;
    int bc=b+c;
    int ca=c+a;
    if(ab==10 || bc==10 || ac==10)
    {
        printf("10");
    }
    else if(a>10 || b>10 || c>10)
    {
        printf("5");
    }
    else if(b!=a || c!=a)
    {
        printf("1");
    }
}
