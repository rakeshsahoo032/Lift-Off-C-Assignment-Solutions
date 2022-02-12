#include<stdio.h>
#include<conio.h>
int main()
{
    int num,t;
    printf("Enter a number: ");
    scanf("%d",&num);
    t=num%2;
    switch(t)
    {
        case 1:
        printf("%d is an Odd number",num);
        break;
        case 0:
        printf("%d is an Even number",num);
        break;
    }
    return 0;
}