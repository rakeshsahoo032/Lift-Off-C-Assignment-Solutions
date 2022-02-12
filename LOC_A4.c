#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
  float result;
  int ch;
  printf("Enter first number: ");
  scanf("%d",&num1);
  printf("Enter second number: ");
  scanf("%d",&num2);
  printf("Choose operation( + then 1, - then 2, * then 3, / then 4, % then 5): ");
  scanf("%d",&ch);
  result=0;
  switch(ch)
  {
    case 1:
    result=num1+num2;
    break;
    case 2:
    result=num1-num2;
    break;
    case 3:
    result=num1*num2;
    break;
    case 4:
    result=num1/num2;
    break;
    case 5:
    result=num1%num2;
    break;
    default:
    printf("Invalid operation");
  }
  printf("Result: %f",result);
  return 0;
}