/*
Дополнительный файл с сложными функциями
Проектное задание №0
Калькулятор со следующими возможностями:
Сложение, вычитание, умножение, деление, деление нацело с взятием остатка,
деления нацело со взятием результата-частного, геометрическая последовательность

@author Ivan.rufus20145
@link https://github.com/rufus20145/My_calc
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
*/

/*
@param firstNumber - делимое, secondNum - делитель
@return возвращает частное двух чисел, если возможно
@example деление чисел: 6 / 4 = 1.5
*/
double computeDivision(double firstNumber, double secondNumber)
{
    if (0 == secondNumber)
    {
        errorCode = 1;
        return 0;
    }
    return firstNumber/secondNumber;
}
/*
@param firstNumber - делимое, secondNum - делитель
@return возвращает остаток от деления, если возможно
@example 6 % 4 = 2
*/
int computeDivisionWithRemainder(double firstNumber, double secondNumber)
//int or double?
{
    int firstNum, secondNum;
    firstNum = firstNumber;
    secondNum = secondNumber;
    if (0 == secondNum)
    {
        errorCode = 1;
        return 0; 
    }
    return firstNum % secondNum;
    
}
/*
@param firstNumber - делимое, secondNum - делитель
@return возвращает неполное частное от деления, если возможно
@example 6 D 4 = 1
*/
int computeQuotientOfDivision(double firstNumber, double secondNumber)
//int or double?
{
    int firstNum, secondNum;
    firstNum = firstNumber;
    secondNum = secondNumber;
    if ( 0 == secondNumber)
    {
        errorCode = 1;
        return 0;
    }
    return firstNum/secondNum;

}
/*
@param firstNumber - a0, secondNumber - множитель прогрессии
@return возвращает члены, сумму и произведение последовательности
@example 2 G 2, N = 3(вводится дополнительно) => члены последовательности: 2,4,8,16;
сумма последовательности: 30; произведение последовательности: 1024
*/
double computeProgression(double firstNumber, double secondNumber)
{
    
}