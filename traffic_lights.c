#include <stdio.h>

int main()
{
    char color;
    scanf("%c",&color);

    if (color == 'r' || color == 'R')
        {
        printf("Stop\n");
        }
    else if (color == 'y' || color == 'Y')
        {
        printf("Ready\n");
        }
    else if (color == 'g' || color == 'G')
        {
        printf("Go\n");
        }
    else
        {
        printf("Invalid\n");
        }

    return 0;
}

