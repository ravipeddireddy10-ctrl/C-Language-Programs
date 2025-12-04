#include <stdio.h>
int main() {
int a,b,c;
float d;

char op;
printf("enter operator(+,-,*,/,%)");
scanf("%c",&op);
printf("give two numbers:");
scanf("%d,%d",&a,&b);
switch (op)
{
    case '+':c=a+b;
    printf("%d",c);
    break;
    case '-':c=a-b;
    printf("%d",c);
    break;
    case '*':c=a*b;
    printf("%d",c);
    break;
    case '/':d=a/b;
    printf("%d",d);
    break;
    case '%':c=a%b;
    printf("%d",c);
    break;
   default : printf("invalid") ;
}

    return 0;
}

