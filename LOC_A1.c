#include<stdio.h>
#include<conio.h>
int main()
{
    char regd[3];
    char name[50];
    char branch[50];
    char h[50];
    printf("Enter the Regd. No: ");
    scanf("%s",&regd);
    printf("Enter the name: ");
    scanf("%s",&name);
    printf("Enter the branch name: ");
    scanf("%s",&branch);
    printf("Enter your hobbies: ");
    scanf("%s",&h);
    printf("My name is %s\n",name);
    printf("My regd no. is %s\n",regd);
    printf("My Branch name is %s\n",branch);
    printf("My hobbies are: %s",h);
    return 0;
}