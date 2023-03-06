#include <stdio.h>

#define sample_num 5

int16_t smoothig(int16_t *result)
{
    // resultを昇順に並べ替え(result[0][1]...[sample_num-1])
    int16_t tmp_result;
    for (int i = 0; i < sample_num; i++)
    {
        for (int j = i + 1; j < sample_num; j++)
        {
            if (result[i] > result[j])
            {
                tmp_result = result[i];
                result[i] = result[j];
                result[j] = tmp_result;
            }
        }
    }

    // Min,Maxを破棄、それ以外の平均を求める
    int32_t sum_result = 0;
    for (int i = 1; i <= (sample_num - 2); i++)
    {
        sum_result += result[i];
    }
    return (int16_t)(sum_result / (sample_num - 2));
}

int main(void)
{
    int16_t result[sample_num] = {1,2,3,4,5};

    printf("%d ", smoothig(result));

    return 0;
}
