//PALINDROME//
#include <stdio.h>
int main ()
{
    int i,j=0,n,k;
    printf("Enter a num:");
    scanf("%d",&n);
    k=n;
    {
        while (n != 0)
        {
            i = n % 10;
            j = j * 10 + i ;
            n=n/10;
        }
        {
            if(j==k)
            {
                printf("%d :This is an Panidrome Number",j);
                
            }
        
            else
            {
                printf("Crashed");
            }
        
        }
    }
}
