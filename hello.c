#include <stdio.h>
#include "max.h"
#include "min.h"

int main()
{
    int a = 520;
    int b = 521;
    int maxNum = max(a, b);
    int minNum = min(a, b);
    printf("max is : %d\n", maxNum);
    printf("min is : %d\n", minNum);

    return 0;
}
