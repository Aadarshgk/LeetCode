int isWinner(int *player1, int player1Size, int *player2, int player2Size)
{
    int flag1 = 0, flag2 = 0, sum1 = 0, sum2 = 0;
    while (player1Size--)
    {
        if ((flag1--) > 0)
        {
            sum1 += 2 * *player1;
        }
        else
        {
            sum1 += *player1;
        }
        if (*player1 == 10)
        {
            flag1 = 2;
        }

        if ((flag2--) > 0)
        {
            sum2 += 2 * *player2;
        }
        else
        {
            sum2 += *player2;
        }
        if (*player2 == 10)
        {
            flag2 = 2;
        }
        player1++;
        player2++;
    }
    return (sum1 > sum2) ? 1 : (sum1 == sum2) ? 0
                                              : 2;
}