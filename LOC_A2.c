#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter first and second number: ");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("%d is greater than %d",x,y);
    }
    elseif(x<y){
        printf("%d is greater than %d",y,x);
    }
    elseif(x==y)
    {
        printf("Both numbers are equal.");
    }
    return 0;
}