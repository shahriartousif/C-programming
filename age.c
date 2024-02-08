#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<=12)
    {
        printf("Child\n");
    }
    else if(a>=13 && a<=19)
    {
        printf("Teen\n");
    }
    else if(a>=20 && a<=64)
    {
        printf("Adult\n");
    }
    else
    {
        printf("Senior\n");
    }
    return 0;
}
