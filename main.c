#include <stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    int ch;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    printf("press 1 to + /n, press 2to */n, press 3 to - /n, press 4 to ");
    scanf("%d",&ch);
    switch(ch){
        case 1:c=a+b;
        printf("%d",c);
        break;
         case 2:c=a*b;
        printf("%d",c);
        break;
         case 3:c=a-b;
        printf("%d",c);
        break;
         case 4:c=a/b;
        printf("%d",c);
        break;
         default:
            printf("wrong input");
}}
