#include <stdio.h>
#include <math.h>

/****************************************************
 * PARAM
 *        signal : [Array] 入力信号
 *      signal_N : [unsigned short int] 入力信号の数
 *        Re, Im : [Array] 実部, 虚部
 *             t : 信号同士の幅
 ***************************************************/
int main()
{
    double signal[] = {1, -1, 5, -3, 1, -3, 0, 0};
    unsigned short int signal_N = sizeof signal / sizeof signal[0];

    double Re[signal_N];
    double Im[signal_N];

    double t = 2 * M_PI / signal_N;

    for (int i = 0; i < signal_N; i++)
    {
        Re[i], Im[i] = 0.0, 0.0;
        for (int j = 0; j < signal_N; j++)
        {
            Re[i] += signal[j] * cos(t * i * j);
            Im[i] += -signal[j] * sin(t * i * j);
        }
    }

    for (int i = 0; i < signal_N; i++)
    {
        printf("%2d%10f%10f\n", i, Re[i], Im[i]);
    }
    return 0;
}
