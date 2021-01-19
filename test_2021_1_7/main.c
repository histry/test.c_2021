#include <stdio.h>

int main()
{
    int b=0;
    int d=0;
    int c=0;
    int a=(b)?c++:d++;
    printf("%d",a);
    printf("%d",c);
    printf("%d",d);
    return 0;
}
