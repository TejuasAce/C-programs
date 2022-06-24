//FLOYD TRIANGLE//
#include <stdio.h>
int main ()
{
    int i,j,k=0,n;
    printf("Enter the number of rows:");
    scanf("%d",& n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
}
