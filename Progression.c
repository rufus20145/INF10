/*
Дополнительный файл с геометрической прогрессией
Проектное задание №0
Калькулятор со следующими возможностями:
Сложение, вычитание, умножение, деление, деление нацело с взятием остатка,
деления нацело со взятием результата-частного, геометрическая последовательность

@author Ivan.rufus20145
@link https://github.com/rufus20145/My_calc
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
*/

/*
@param firstNumber - a0, secondNumber - множитель прогрессии
@return возвращает члены, сумму и произведение последовательности
@example 2 G 2, N = 3(вводится дополнительно) => члены последовательности: 2,4,8,16;
сумма последовательности: 30; произведение последовательности: 1024
@return void
@uses <stdio.h>
*/
void computeProgression(double b1, double q)
{
    int n;
    double bN = b1, sum = b1, mult = 1;
    scanf("%d", &n);
    printf("B[1] = %lg\n", b1);
    for(int i = 1; i <n; i++)
    {
        bN *= q;
        printf("B[%d] = %lg\n", i + 1, bN);
        sum += bN;
        mult *= bN;
    }
    printf("\nSum: %lg\nProduct: %lg\n", sum, mult);
}
