#include <stdio.h>

void show_value(int v)
{
    printf("got: %d\n", v);
}

int main(int argc, char *argv[])
{
    int v ;

    printf("input a number: ");
    scanf("%d", &v);
    show_value(v);

    return 0;
}