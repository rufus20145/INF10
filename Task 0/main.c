/*
Проектное задание №0
Калькулятор со следующими возможностями:
Сложение, вычитание, умножение, деление, деление нацело с взятием остатка,
деления нацело со взятием результата-частного, геометрическая последовательность

@author Ivan.rufus20145
@link https://github.com/rufus20145/My_calc
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
*/
#include <stdio.h>
#include "ComputeFunctions.c"
#include "Progression.c"
int main()
{
    double firstNumber, secondNumber, result;
    int errorCode = 0;
    char operation;
    while(1)
    {
        scanf("%lg %c %lg", &firstNumber, &operation, &secondNumber);
        switch (operation)
        {
            case '+':
                printf("%lg + %lg = %lg\n", firstNumber, secondNumber, firstNumber+secondNumber);
                break;
            case '-':
                printf("%lg - %lg = %lg\n", firstNumber, secondNumber, firstNumber-secondNumber);
                break;
            case '*':
                printf("%lg * %lg = %lg\n", firstNumber, secondNumber, firstNumber*secondNumber);
                break;
            case '/':
                result = computeDivision(firstNumber, secondNumber, &errorCode);
                if (1==errorCode)
                    printf("It`s impossible to divide by 0");
                else
                    printf("%lg / %lg = %lg\n", firstNumber, secondNumber, result);
                break;
            case '%':
                result = computeRemainderOfDivision((int) firstNumber,(int) secondNumber, &errorCode);
                if (1==errorCode)
                    printf("It`s impossible to divide by 0");
                else
                    printf("%lg %% %lg = %lg", firstNumber, secondNumber, result);
                break;
            case 'D':
                result = computeQuotientOfDivision((int)firstNumber,(int) secondNumber, &errorCode);
                if (1==errorCode)
                    printf("It`s impossible to divide by 0");
                else
                    printf("%lg D %lg = %lg", firstNumber, secondNumber, result);
                break;
            case 'G':
                computeProgression(firstNumber, secondNumber);
                break;
            case 'X':
                printf("Exit");
                return 0;
            default:
                break;
        }
        errorCode = 0;
    }
}