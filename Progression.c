/*
@param firstNumber - a0, secondNumber - множитель прогрессии
@return возвращает члены, сумму и произведение последовательности
@example 2 G 2, N = 3(вводится дополнительно) => члены последовательности: 2,4,8,16;
сумма последовательности: 30; произведение последовательности: 1024
*/
void computeProgression(double b1, double q)
{
    int bN = b1, n, sum = b1, mult = 1;
    scanf("%d", &n);
    for(int i = 1; i <=n; i++)
    {
        bN *= q;
        printf("%lg ", bN);
        sum += bN;
        mult *= bN;
    }
    printf("\nSum: %lg \nProduct: %lg", sum, mult);
}