#include <stdio.h>

int main(void)
{
    u_int8_t bin_data = 0x80;
    char asc_data[4];

    snprintf(asc_data, 3, "%02X", bin_data); // 16真数2文字に変換
    asc_data[2] = '\n';
    asc_data[3] = 0;
    printf(asc_data);

    return 0;
}