#include <stdio.h>
void main() {
    int ciagars,weekend;
    printf("Enter the no of cigars:");
    scanf("%d",&cigars);
    printf("Enter 1 for weekend \t 0 for not weekend");
    scanf("%d",&weekend);
    if(weekend)
    {
     if(cigars>=40)
       {
         printf("true");
       }    
     else
       {
        printf("false");
       }
    }
    else
    {
      if(cirgas>=40 && cirgas<=60)
      {
        printf("true");
      }
      else
      {
        printf("false");
      }
     }
}