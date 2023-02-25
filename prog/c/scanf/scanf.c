#include <stdio.h>

int add(int num1, int num2)
{
    return num1 + num2;
}

int main(void)
{
    char name[256];
    int a, b;

    printf("あなたの名前は？\n");
    scanf("%s", name);
    printf("私は%s\n", name);

    printf("aは？\n");
    scanf("%d", &a);
    printf("bは？\n");
    scanf("%d", &b);
    printf("a+bは%d\n", add(a, b));

    return 0;
}
