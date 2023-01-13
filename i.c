#include<stdio.h>
int main()
{
    int Week;
    printf("Enter number between 1-7 : ");
    scanf("%d",&Week);
    switch(Week)
    {
        case 1:
               printf("Monday\n");
               break;
        case 2:
               printf("Thusday\n");
               break;
        case 3:
               printf("Wednasday\n");
               break;
        case 4:
               printf("thursday\n");
               break;
        case 5:
               printf("Friday\n");
               break;
        case 6:
               printf("saturday\n");
               break;
        case 7:
               printf("sunday\n");
               break;
        default:
               printf("Invalid input.Only enter number between 1-7");
    }
    return 0;
}
