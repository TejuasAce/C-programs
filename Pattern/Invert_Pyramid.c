//Invert Pyramid//
#include <stdio.h>
int main() 
{
   int n,i,j,k;
   printf("enter the number of rows: ");
   scanf("%d",&n);
   {
       for (i=n;i>=1;i--)
       {
            for (k=0;k<n-i;k++)
            { 
                printf("  ");
            }
            {
                for (j=i; j<=2*i-1;j++)
                {
                    printf("* ");
                }
                {
                     for (j=0;j<i-1;j++)
                     {
                         printf("* ");
                     }
                }
            }
            printf("\n");
       }
   }   
}
