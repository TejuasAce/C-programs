//A Perfect Square//
#include <stdio.h>
int main() 
{
   int n,i,j=0;
   printf("Enter a number: ");
   scanf("%d",&n);
   {
      for(i=0;i<=n/2;i++)
      {
         if (i*i==n)
         {
             j++;
             break;
         }
       
      }
      if (j==1)
      {
          printf("It is perfect Square of:%d",i);
      }
      else
      {
          printf("It is not a perfect Square:");
      } 
      
   }
}
