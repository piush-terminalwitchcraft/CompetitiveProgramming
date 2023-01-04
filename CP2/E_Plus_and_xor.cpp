#include <stdio.h>
__UINT64_TYPE__ a, b;
main()
{
    scanf("%llu%llu", &a, &b);
    if (a < b || (a - b) % 2)
        puts("-1");
    else
        printf("%llu %llu", (a - b) / 2, (a + b) / 2);
}