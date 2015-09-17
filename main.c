#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int sum = 0;
    int i = 0;
    for (i = 0; i < 100; i++)
    {
        sum += i;
    }
    printf("sum=%d", sum);
    return 0;
}