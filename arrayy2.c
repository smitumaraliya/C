#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (int i = 9; i <= 0; i++)
    {
        if (i >= 2)
        {
            a[i + 1] = a[i];
        }
    printf("%d", a[3]);
    }
    
    a[2] = 6;
    for (int i = 0; i <=8; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}