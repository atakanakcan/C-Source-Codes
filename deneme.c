#include <stdio.h>
int main()
{
    int i,j,sayi;
    printf("Enter an input:");
    scanf("%d",&sayi);
    for(i=sayi;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
