#include<stdio.h>
int main()
{
 char operator;
 int a,b;

  printf("Enter two numbers:");
  scanf ("%d %d",&a,&b);
  printf("Enter an  operator:");
  scanf("%s",&operator);
  switch(operator)
  {
    case '+':
        printf("The sum of %d+%d=%d",a,b,a+b);
           break;
    case '-':
        printf("The difference of %d-%d=%d",a,b,a-b);
           break;
    case '*':
        printf("The product of %d*%d=%d",a,b,a*b);
           break;
    case '/':
        printf("The quotient of %d/%d=%d",a,b,a/b);
           break;
    default:
        fprintf(stderr, "Invalid operator\n");
        exit(-1);
  }
 return 0;
}
