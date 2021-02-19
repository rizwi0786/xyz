
#include <stdio.h>

int main()
{
    int r,s,t,b;
    printf("Enter th no of rows required:");
    scanf("%d",&r);
    //let's make configuratuion
    
    for(t=1; t<=r; t++)
    {
        for(b=0; b<=t-1; b++)
        {
            printf(" ");
        }
        for(s=1; s<=2*(r-t)-1; s++)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
