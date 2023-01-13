/*
   1
   23
   456
   78910
   1112131415 ........
*/
#include<stdio.h>
int main()
{
    int i,j,n,p=1;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",p++); 
        }
        printf("\n");
    }
      return 0;
        
}