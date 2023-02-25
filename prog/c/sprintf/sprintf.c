#include <stdio.h>

int main(void)
{
    char moji[32];

    char data1[] = "Hello";
    char data2 = 'D';
    int data3 = 2020;
    int64_t unix_time = 1234567890123;

    // Hello,D,2020,UT:1234567890123\n
    sprintf(moji, "%s,%c,%d,UT:%lld\n", data1, data2, data3, unix_time);
    printf("%s", moji);

    return 0;
}