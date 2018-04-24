/*
 * Copyright OAI Software Alliance
 * Author Raphael Defosseux
 * Comments : eigpiu
 */
#include <stdio.h>

int main()
{
    unsigned int testId = 1;
    printf ("Test%d\n", testId);
#ifdef _DEBUG
    char a[10];
    a[10] = 0;
#endif
#ifdef _RELEASE
    int idx;
    int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        sum += idx;
    }
    printf ("Sum = %d\n", sum);
#endif
    return 0;
}
