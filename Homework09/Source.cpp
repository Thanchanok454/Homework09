#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
    int x, y, num, total;
    printf("Enter number : ");
    scanf("%d", &num);
    for (x = 1; y <= 24; x++) {
        total = num * x;
        printf("%d x %d = %d\n", num, x, total);
    }
    return 0;
}