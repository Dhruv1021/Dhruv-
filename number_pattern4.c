/* 
   1
   01
   101
   0101
   10101 ....... 
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           (i+j) % 2 == 0 ? printf("1"):printf("0");
        }
        printf("\n");
    }
    return 0;
}